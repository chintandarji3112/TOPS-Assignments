#include <iostream>
using namespace std;

class Calculator {
private:
    float num1;
    float num2;

public:
    Calculator(float n1, float n2) {
        num1 = n1;
        num2 = n2;
    }

    float add() {
        return num1 + num2;
    }

    float subtract() {
        return num1 - num2;
    }

    float multiply() {
        return num1 * num2;
    }

    float divide() {
        if (num2 == 0) {
            cout << "Cannot divide by zero" << endl;
            return 0;
        } else {
            return num1 / num2;
        }
    }
};

int main() {
    Calculator calc(10, 5);
    
    cout << "Addition: " << calc.add() << endl;
    cout << "Subtraction: " << calc.subtract() << endl;
    cout << "Multiplication: " << calc.multiply() << endl;
    cout << "Division: " << calc.divide() << endl;
    
    return 0;
}

