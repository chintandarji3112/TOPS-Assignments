const express = require("express");
const app = express();
const routes = require("./routes");

app.use(express.json());
app.use("/", routes);

app.listen(5000, () => console.log("Server running on port 5000"));