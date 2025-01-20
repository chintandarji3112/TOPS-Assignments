import { configureStore } from "@reduxjs/toolkit";
import counterReducer from "../features/counterSlice";
import todoReducer from "../features/todoSlice";
import productsReducer from "../features/productSlice";

export const store = configureStore({
  reducer: {
    counter: counterReducer,
    todos: todoReducer,
    products: productsReducer,
  },
});