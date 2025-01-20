import React, { useEffect, useState } from "react";
import { useDispatch, useSelector } from "react-redux";
import { fetchproducts, addproduct, updateproduct, deleteproduct } from "../features/productSlice";

const Products = () => {
  const dispatch = useDispatch();
  const { products, status } = useSelector((state) => state.products);
  const [newProduct, setNewProduct] = useState({ productname: "", productprice: "" });
  const [editProduct, setEditProduct] = useState(null);

  useEffect(() => {
    dispatch(fetchproducts());
  }, [dispatch]);

  const handleAddProduct = () => {
    dispatch(addproduct({ ...newProduct, id: Date.now().toString() }));
    setNewProduct({ productname: "", productprice: "" });
  };

  const handleUpdateProduct = () => {
    dispatch(updateproduct(editProduct));
    setEditProduct(null);
  };

  const handleDeleteProduct = (id) => {
    dispatch(deleteproduct(id));
  };

  return (
    <div>
      <h2>Products</h2>
      {status === "loading" && <p>Loading...</p>}
      {status === "failed" && <p>Failed to load products.</p>}
      {status === "succeeded" && (
        <ul>
          {products.map((product) => (
            <li key={product.id}>
              {product.productname} - ₹{product.productprice}
              <button onClick={() => setEditProduct(product)}>Edit</button>
              <button onClick={() => handleDeleteProduct(product.id)}>Delete</button>
            </li>
          ))}
        </ul>
      )}
      <div>
        <h3>{editProduct ? "Edit Product" : "Add Product"}</h3>
        <input
          type="text"
          placeholder="Name"
          value={editProduct ? editProduct.productname : newProduct.productname}
          onChange={(e) =>
            editProduct
              ? setEditProduct({ ...editProduct, productname: e.target.value })
              : setNewProduct({ ...newProduct, productname: e.target.value })
          }
        />
        <input
          type="text"
          placeholder="Price"
          value={editProduct ? editProduct.productprice : newProduct.productprice}
          onChange={(e) =>
            editProduct
              ? setEditProduct({ ...editProduct, productprice: e.target.value })
              : setNewProduct({ ...newProduct, productprice: e.target.value })
          }
        />
        <button onClick={editProduct ? handleUpdateProduct : handleAddProduct}>
          {editProduct ? "Update" : "Add"}
        </button>
      </div>
    </div>
  );
};

export default Products;