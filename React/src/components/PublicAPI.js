import React, { useEffect, useState } from "react";
import axios from "axios";

const PublicAPI = () => {
  const [data, setData] = useState([]);
  const [loading, setLoading] = useState(true);

  useEffect(() => {
    axios.get("https://jsonplaceholder.typicode.com/posts").then((response) => {
      setData(response.data);
      setLoading(false);
    });
  }, []);

  if (loading) return <p>Loading...</p>;

  return (
    <div>
      <h1>Public API Data</h1>
      <ul>
        {data.slice(0, 10).map((item) => (
          <li key={item.id}>{item.title}</li>
        ))}
      </ul>
    </div>
  );
};

export default PublicAPI;