#include <iostream>

class Circle {
private:
    double radius;

public:
    // Constructor
    Circle(double r) {
        radius = r;
    }

    // Function to calculate area
    double calculateArea() {
        return 3.14159 * radius * radius;
    }

    // Function to calculate circumference
    double calculateCircumference() {
        return 2 * 3.14159 * radius;
    }
};

int main() {
    // Create an instance of Circle with radius 5
    Circle myCircle(5);

    // Calculate and print area
    std::cout << "Area of the circle: " << myCircle.calculateArea() << std::endl;

    // Calculate and print circumference
    std::cout << "Circumference of the circle: " << myCircle.calculateCircumference() << std::endl;

    return 0;
}

