import React, { useEffect, useState } from "react";
import axios from "axios";
import { Link } from "react-router-dom";

const UsersList = () => {
  const [users, setUsers] = useState([]);
  const [loading, setLoading] = useState(true);
  const [error, setError] = useState(null);

  useEffect(() => {
    axios.get("http://localhost:5000/users")
      .then((response) => {
        setUsers(response.data);
        setLoading(false);
      })
      .catch((error) => {
        setError(error);
        setLoading(false);
      });
  }, []);

  const deleteUser = (id) => {
    axios.delete(`http://localhost:5000/users/${id}`)
      .then(() => {
        setUsers(users.filter((user) => user.id !== id));
      })
      .catch((error) => {
        setError(error);
      });
  };

  if (loading) return <p>Loading...</p>;
  if (error) return <p>Error: {error.message}</p>;

  return (
    <div>
      <h1>User List</h1>
      <ul>
        {users.map((user) => (
          <li key={user.id}>
            {user.name} - {user.email}{" "}
            <button onClick={() => deleteUser(user.id)}>Delete</button>
            <Link to={`/update-user/${user.id}`}>Update</Link>
          </li>
        ))}
      </ul>
    </div>
  );
};

export default UsersList;