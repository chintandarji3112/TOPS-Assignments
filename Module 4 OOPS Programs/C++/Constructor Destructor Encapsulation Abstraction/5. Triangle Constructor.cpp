#include <iostream>
using namespace std;

class Triangle {
private:
    double side1, side2, side3;

public:
    // Constructor
    Triangle(double s1, double s2, double s3) {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }

    // Member function to determine the type of triangle
    void triangleType() {
        if (side1 == side2 && side2 == side3) {
            cout << "Equilateral Triangle" << endl;
        } else if (side1 == side2 || side1 == side3 || side2 == side3) {
            cout << "Isosceles Triangle" << endl;
        } else {
            cout << "Scalene Triangle" << endl;
        }
    }
};

int main() {
    // Creating instances of the Triangle class with different side lengths
    Triangle t1(5, 5, 5); // Equilateral Triangle
    Triangle t2(4, 4, 3); // Isosceles Triangle
    Triangle t3(3, 4, 5); // Scalene Triangle

    // Determining the type of triangles
    cout << "Triangle 1: ";
    t1.triangleType();

    cout << "Triangle 2: ";
    t2.triangleType();

    cout << "Triangle 3: ";
    t3.triangleType();

    return 0;
}

