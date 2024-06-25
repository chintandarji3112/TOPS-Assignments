#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    // Constructor
    BankAccount(int accNum, double initialBalance) {
        accountNumber = accNum;
        balance = initialBalance;
    }

    // Member function to deposit money
    void deposit(double amount) {
        balance += amount;
        cout << "Deposit of $" << amount << " successful." << endl;
    }

    // Member function to withdraw money
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawal of $" << amount << " successful." << endl;
        } else {
            cout << "Insufficient funds. Withdrawal unsuccessful." << endl;
        }
    }

    // Member function to get account balance
    double getBalance() {
        return balance;
    }
};

int main() {
    // Creating an instance of the BankAccount class
    BankAccount myAccount(123456789, 1000.0);

    // Depositing and withdrawing money
    myAccount.deposit(500.0);
    myAccount.withdraw(200.0);
    myAccount.withdraw(1500.0); // This should fail due to insufficient funds

    // Getting account balance
    cout << "Current Balance: $" << myAccount.getBalance() << endl;

    return 0;
}

