#include <iostream>

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    // Function to calculate area
    double calculateArea() {
        return length * width;
    }

    // Function to calculate perimeter
    double calculatePerimeter() {
        return 2 * (length + width);
    }

    // Getters and setters for length and width (optional)
    double getLength() {
        return length;
    }

    void setLength(double l) {
        length = l;
    }

    double getWidth() {
        return width;
    }

    void setWidth(double w) {
        width = w;
    }
};

int main() {
    // Create an instance of Rectangle with length 5 and width 4
    Rectangle myRectangle(5, 4);

    // Calculate and print area
    std::cout << "Area of the rectangle: " << myRectangle.calculateArea() << std::endl;

    // Calculate and print perimeter
    std::cout << "Perimeter of the rectangle: " << myRectangle.calculatePerimeter() << std::endl;

    return 0;
}

