// Import necessary dependencies
import React, { useState, createContext, useContext } from "react";

// Step 4: Create a Context for global state
const ChecklistContext = createContext();

// Context provider component
const ChecklistProvider = ({ children }) => {
  const [selectedOptions, setSelectedOptions] = useState([]);

  const updateSelectedOptions = (option, isChecked) => {
    if (isChecked) {
      setSelectedOptions((prev) => [...prev, option]);
    } else {
      setSelectedOptions((prev) => prev.filter((item) => item !== option));
    }
  };

  return (
    <ChecklistContext.Provider value={{ selectedOptions, updateSelectedOptions }}>
      {children}
    </ChecklistContext.Provider>
  );
};

// Checklist component
const Checklist = () => {
  const { selectedOptions, updateSelectedOptions } = useContext(ChecklistContext);

  // List of options for the checklist
  const options = ["Option 1", "Option 2", "Option 3", "Option 4"];

  // Step 2: Event handler to update state
  const handleCheckboxChange = (event) => {
    const { name, checked } = event.target;
    updateSelectedOptions(name, checked);
  };

  return (
    <div>
      <h2>Checklist</h2>
      {/* Step 3: Render checkboxes dynamically */}
      <ul>
        {options.map((option) => (
          <li key={option}>
            <label>
              <input
                type="checkbox"
                name={option}
                onChange={handleCheckboxChange}
                checked={selectedOptions.includes(option)}
              />
              {option}
            </label>
          </li>
        ))}
      </ul>
      <h3>Selected Options:</h3>
      {/* Display selected options dynamically */}
      {selectedOptions.length > 0 ? (
        <ul>
          {selectedOptions.map((option) => (
            <li key={option}>{option}</li>
          ))}
        </ul>
      ) : (
        <p>No options selected.</p>
      )}
    </div>
  );
};

// Main App component
const App = () => {
  return (
    <ChecklistProvider>
      <Checklist />
    </ChecklistProvider>
  );
};

export default App;
