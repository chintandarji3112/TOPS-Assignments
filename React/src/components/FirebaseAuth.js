// Import the functions you need from the SDKs
import React, { useState } from "react";
import { initializeApp } from "firebase/app";
import {
  getAuth,
  GoogleAuthProvider,
  signInWithPopup,
  signOut as firebaseSignOut,
} from "firebase/auth";
import axios from "axios";

// Firebase configuration
const firebaseConfig = {
  apiKey: "AIzaSyBof6jOThKpREg86Fd7g2n9HQCcY5Ba-fU",
  authDomain: "react-jsonserver-firebase.firebaseapp.com",
  projectId: "react-jsonserver-firebase",
  storageBucket: "react-jsonserver-firebase.appspot.com",
  messagingSenderId: "721377794092",
  appId: "1:721377794092:web:7931f12cc3c75a9c551989",
  measurementId: "G-9F2R7SVGQE"
};

// Initialize Firebase
const app = initializeApp(firebaseConfig);
const auth = getAuth(app);
const provider = new GoogleAuthProvider();

const FirebaseAuth = () => {
  const [user, setUser] = useState(() =>
    JSON.parse(localStorage.getItem("authUser"))
  );
  const [error, setError] = useState(null);

  const signInWithGoogle = async () => {
    try {
      const result = await signInWithPopup(auth, provider);
      const signedInUser = result.user;
      setUser(signedInUser);
      localStorage.setItem("authUser", JSON.stringify(signedInUser));
      setError(null);

      // Add user to the user list if not already registered
      const response = await axios.get(`http://localhost:5000/users?email=${signedInUser.email}`);
      if (response.data.length === 0) {
        await axios.post("http://localhost:5000/users", {
          name: signedInUser.displayName,
          email: signedInUser.email,
        });
      }
    } catch (error) {
      if (!error.response) {
        console.error("Network error:", error);
        setError(new Error("Network error. Please try again later."));
      } else {
        console.error("Error signing in:", error);
        setError(error);
      }
    }
  };

  const signOut = async () => {
    try {
      await firebaseSignOut(auth);
      setUser(null);
      localStorage.removeItem("authUser");
      setError(null);
    } catch (error) {
      if (!error.response) {
        console.error("Network error:", error);
        setError(new Error("Network error. Please try again later."));
      } else {
        console.error("Error signing out:", error);
        setError(error);
      }
    }
  };

  return (
    <div>
      {user ? (
        <div>
          <h1>Welcome, {user.displayName}</h1>
          <button onClick={signOut}>Logout</button>
        </div>
      ) : (
        <div>
          <button onClick={signInWithGoogle}>Login/Register with Google</button>
          {error && <p>Error: {error.message}</p>}
        </div>
      )}
    </div>
  );
};

export default FirebaseAuth;