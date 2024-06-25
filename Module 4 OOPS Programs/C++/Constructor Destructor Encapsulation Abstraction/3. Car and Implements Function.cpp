#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string company;
    string model;
    int year;

public:
    // Constructor
    Car(string comp, string mdl, int yr) {
        company = comp;
        model = mdl;
        year = yr;
    }

    // Getter functions
    string getCompany() {
        return company;
    }

    string getModel() {
        return model;
    }

    int getYear() {
        return year;
    }

    // Setter functions
    void setCompany(string comp) {
        company = comp;
    }

    void setModel(string mdl) {
        model = mdl;
    }

    void setYear(int yr) {
        year = yr;
    }
};

int main() {
    // Creating an instance of the Car class
    Car myCar("Toyota", "Camry", 2022);

    // Getting initial values
    cout << "Initial Company: " << myCar.getCompany() << endl;
    cout << "Initial Model: " << myCar.getModel() << endl;
    cout << "Initial Year: " << myCar.getYear() << endl;

    // Changing values
    myCar.setCompany("Honda");
    myCar.setModel("Accord");
    myCar.setYear(2023);

    // Getting updated values
    cout << "\nUpdated Company: " << myCar.getCompany() << endl;
    cout << "Updated Model: " << myCar.getModel() << endl;
    cout << "Updated Year: " << myCar.getYear() << endl;

    return 0;
}

