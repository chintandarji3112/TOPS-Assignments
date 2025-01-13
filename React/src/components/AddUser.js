import React, { useState } from "react";
import axios from "axios";

const AddUser = () => {
  const [name, setName] = useState("");
  const [email, setEmail] = useState("");
  const [loading, setLoading] = useState(false);
  const [error, setError] = useState(null);

  const handleSubmit = (e) => {
    e.preventDefault();
    setLoading(true);
    axios.post("http://localhost:5000/users", { name, email })
      .then(() => {
        alert("User added!");
        setName("");
        setEmail("");
        setLoading(false);
      })
      .catch((error) => {
        if (!error.response) {
          setError(new Error("Network Error"));
        } else {
          setError(error);
        }
        setLoading(false);
      });
  };

  return (
    <div>
      <h1>Add User</h1>
      <form onSubmit={handleSubmit}>
        <input
          type="text"
          placeholder="Name"
          value={name}
          onChange={(e) => setName(e.target.value)}
        />
        <input
          type="email"
          placeholder="Email"
          value={email}
          onChange={(e) => setEmail(e.target.value)}
        />
        <button type="submit" disabled={loading}>
          {loading ? "Adding..." : "Add"}
        </button>
        {error && <p>Error: {error.message}</p>}
      </form>
    </div>
  );
};

export default AddUser;