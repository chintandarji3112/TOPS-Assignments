import React, { useState, useEffect } from "react";
import axios from "axios";
import { useParams } from "react-router-dom";

const UpdateUser = () => {
  const { id } = useParams();
  const [name, setName] = useState("");
  const [email, setEmail] = useState("");
  const [loading, setLoading] = useState(false);
  const [error, setError] = useState(null);

  useEffect(() => {
    axios.get(`http://localhost:5000/users/${id}`)
      .then((response) => {
        setName(response.data.name);
        setEmail(response.data.email);
      })
      .catch((error) => {
        setError(error);
      });
  }, [id]);

  const handleSubmit = (e) => {
    e.preventDefault();
    setLoading(true);
    axios.put(`http://localhost:5000/users/${id}`, { name, email })
      .then(() => {
        alert("User updated!");
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
      <h1>Update User</h1>
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
          {loading ? "Updating..." : "Update"}
        </button>
        {error && <p>Error: {error.message}</p>}
      </form>
    </div>
  );
};

export default UpdateUser;
