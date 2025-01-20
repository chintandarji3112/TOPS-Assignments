import { createSlice } from "@reduxjs/toolkit";
import axios from "axios";

const productSlice = createSlice({
  name: "products",
  initialState: { products: [], status: "idle" },
  reducers: {
    addproductStart: (state) => {
      state.status = "loading";
    },
    addproductSuccess: (state, action) => {
      state.status = "succeeded";
      state.products.push(action.payload);
    },
    addproductFailure: (state) => {
      state.status = "failed";
    },
    updateproductStart: (state) => {
      state.status = "loading";
    },
    updateproductSuccess: (state, action) => {
      state.status = "succeeded";
      const index = state.products.findIndex(product => product.id === action.payload.id);
      if (index !== -1) {
        state.products[index] = action.payload;
      }
    },
    updateproductFailure: (state) => {
      state.status = "failed";
    },
    deleteproductStart: (state) => {
      state.status = "loading";
    },
    deleteproductSuccess: (state, action) => {
      state.status = "succeeded";
      state.products = state.products.filter(product => product.id !== action.payload);
    },
    deleteproductFailure: (state) => {
      state.status = "failed";
    },
    fetchproductsStart: (state) => {
      state.status = "loading";
    },
    fetchproductsSuccess: (state, action) => {
      state.status = "succeeded";
      state.products = action.payload;
    },
    fetchproductsFailure: (state) => {
      state.status = "failed";
    },
  },
});

export const {
  addproductStart, addproductSuccess, addproductFailure,
  updateproductStart, updateproductSuccess, updateproductFailure,
  deleteproductStart, deleteproductSuccess, deleteproductFailure,
  fetchproductsStart, fetchproductsSuccess, fetchproductsFailure
} = productSlice.actions;

export const fetchproducts = () => async (dispatch) => {
  dispatch(fetchproductsStart());
  try {
    const response = await axios.get("https://67175651b910c6a6e0279cb5.mockapi.io/tableITEMS");
    dispatch(fetchproductsSuccess(response.data));
  } catch (error) {
    dispatch(fetchproductsFailure());
  }
};

export const addproduct = (product) => async (dispatch) => {
  dispatch(addproductStart());
  try {
    const response = await axios.post("https://67175651b910c6a6e0279cb5.mockapi.io/tableITEMS", product);
    dispatch(addproductSuccess(response.data));
  } catch (error) {
    dispatch(addproductFailure());
  }
};

export const updateproduct = (product) => async (dispatch) => {
  dispatch(updateproductStart());
  try {
    const response = await axios.put(`https://67175651b910c6a6e0279cb5.mockapi.io/tableITEMS/${product.id}`, product);
    dispatch(updateproductSuccess(response.data));
  } catch (error) {
    dispatch(updateproductFailure());
  }
};

export const deleteproduct = (id) => async (dispatch) => {
  dispatch(deleteproductStart());
  try {
    await axios.delete(`https://67175651b910c6a6e0279cb5.mockapi.io/tableITEMS/${id}`);
    dispatch(deleteproductSuccess(id));
  } catch (error) {
    dispatch(deleteproductFailure());
  }
};

export default productSlice.reducer;