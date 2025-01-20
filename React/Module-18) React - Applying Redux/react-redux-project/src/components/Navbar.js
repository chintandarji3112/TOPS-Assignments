import React from "react";
import { NavLink } from "react-router-dom";

const Navbar = () => {
  return (
    <nav style={{ display: "flex", gap: "1rem", padding: "1rem", background: "#000" }}>
      <NavLink to="/" exact style={{ textDecoration: "none" }} activeStyle={{ fontWeight: "bold" }}>
        Home
      </NavLink>
      <NavLink to="/counter" style={{ textDecoration: "none" }} activeStyle={{ fontWeight: "bold" }}>
        Counter
      </NavLink>
      <NavLink to="/todos" style={{ textDecoration: "none" }} activeStyle={{ fontWeight: "bold" }}>
        Todos
      </NavLink>
      <NavLink to="/products" style={{ textDecoration: "none" }} activeStyle={{ fontWeight: "bold" }}>
        Products
      </NavLink>
    </nav>
  );
};

export default Navbar;