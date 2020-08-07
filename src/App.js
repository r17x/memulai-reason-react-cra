import React from "react";
import logo from "./logo.svg";
import "./App.css";
import { make as HelloWorld } from "./App.bs";

function App() {
  return (
    <div className="App">
      <HelloWorld />
    </div>
  );
}

export default App;
