//#include <iostream>
using namespace std;

class Matrix {
private:
    int size;
    int* data;

public:
    Matrix(int n) : size(n) {
        data = new int[size];
    }

    // Overload the '+' operator for matrix addition
    Matrix operator+(const Matrix& other) const {
        if (size != other.size) {
            cout << "Matrices must have the same size for addition." << endl;
            return Matrix(0);
        }

        Matrix result(size);
        for (int i = 0; i < size; ++i) {
            result.data[i] = data[i] + other.data[i];
        }
        return result;
    }

    // Destructor to free memory
    ~Matrix() {
        delete[] data;
    }

    // Input function
    void accept() {


