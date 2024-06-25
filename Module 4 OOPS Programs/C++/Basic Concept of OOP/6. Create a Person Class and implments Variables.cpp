#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;
    std::string country;

public:
    // Constructor
    Person() {
        name = "";
        age = 0;
        country = "";
    }

    // Setters
    void setName(const std::string& n) {
        name = n;
    }

    void setAge(int a) {
        age = a;
    }

    void setCountry(const std::string& c) {
        country = c;
    }

    // Getters
    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    std::string getCountry() const {
        return country;
    }
};

int main() {
    // Create an instance of Person
    Person person;

    // Set values
    person.setName("Chintan");
    person.setAge(20);
    person.setCountry("INDIA");

    // Get and print values
    std::cout << "Name: " << person.getName() << std::endl;
    std::cout << "Age: " << person.getAge() << std::endl;
    std::cout << "Country: " << person.getCountry() << std::endl;

    return 0;
}

