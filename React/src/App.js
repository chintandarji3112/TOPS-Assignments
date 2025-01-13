import React from "react";
import { BrowserRouter as Router, Route, Routes, Link } from "react-router-dom";
import UsersList from "./components/UsersList";
import FirebaseAuth from "./components/FirebaseAuth";
import PublicAPI from "./components/PublicAPI";
import UpdateUser from "./components/UpdateUser";

const App = () => {
  return (
    <Router>
      <div>
        <nav>
          <Link to="/">Users</Link> | <Link to="/auth">Login</Link> | <Link to="/public-api">API Data</Link>
        </nav>
        <Routes>
          <Route path="/" element={<UsersList />} />
          <Route path="/auth" element={<FirebaseAuth />} />
          <Route path="/public-api" element={<PublicAPI />} />
          <Route path="/update-user/:id" element={<UpdateUser />} />
        </Routes>
      </div>
    </Router>
  );
};

export default App;