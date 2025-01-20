/* THEORY EXERCISE */

    /** Question 1: What is Redux, and how does it manage state in a React application? **/

        /*** Answer: Redux is a state management library that provides a predictable state container for JavaScript apps. It uses a single store to manage the application state and ensures consistency. 
        
        Redux manages state through unidirectional data flow:

        // Actions: Describe events that change the state.
        // Reducers: Pure functions that update the state based on actions.
        // Store: Holds the entire state of the application.

        ***/

    /** Question 2: Explain the three core principles of Redux: Store, Actions, and Reducers. **/

        /*** Answer :
        
        // Store: Centralized place where the entire application state is stored.
        // Actions: Objects that describe changes in the application. Actions have a type property and optionally additional payload.
        // Reducers: Functions that take the current state and an action, and return the new state.

        ***/


    /** Question 3: What is middleware in Redux, and why is it important? Provide examples of common middleware like Redux Thunk or Redux Saga.

        /*** Answer: Middleware in Redux extends store functionality, enabling features like asynchronous actions, logging, and error handling.

        // Redux Thunk: Allows writing action creators that return functions instead of actions, enabling asynchronous operations.
        // Redux Saga: Handles asynchronous operations with generator functions, offering more control over side effects.

        ***/


    /** Question 4: What are the differences between Redux and React Context API? When would you use one over the other? **/

        /*** Answer: Redux and React Context API are both state management solutions, but they differ in features and complexity.
         
        Feature	                 Redux	                                        React Context API

        Purpose :-               State management for large apps	            Share data across components
        Performance :-	         Optimized for large-scale state	            Can cause re-renders
        Middleware :-	         Supports middleware (e.g., Thunk)	            No middleware support
        Complexity :-	         More setup required	                        Simpler to implement

        ***/


    /** Question 5: what is Redux Toolkit, and how does it simplify Redux development?

        /*** Answer: 
                Redux Toolkit simplifies Redux development by providing utilities like createSlice, configureStore, and middleware integration. It reduces boilerplate code and enables better state management with a developer-friendly API.
                Redux Toolkit is the official, opinionated, and recommended way to write Redux logic. It addresses the common complexities and boilerplate associated with using Redux by providing pre-configured tools and utilities.
        ***/