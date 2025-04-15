/*
Design a class to represent a bank account. Include the following members.
a. Data Members
b. Name of the depositor.
c. Account number.
d. Type of account.
e. Balance amount in the account Methods.
f. To assign initial values.
g. To deposit an amount.
h. To withdraw an amount after checking balance.
i. To display the name and balance Incorporate a constructor to provide initial
values.
*/


#include <iostream>
using namespace std;

class BankAccount {
private:
    string depositorName;
    int accountNumber;
    string accountType;
    double balance;

public:
    // Constructor to assign initial values
    BankAccount(string name, int accNo, string type, double initialBalance) {
        depositorName = name;
        accountNumber = accNo;
        accountType = type;
        balance = initialBalance;
    }

    // Method to deposit an amount
    void deposit(double amount) {
        balance += amount;
        cout << "Deposited ₹" << amount << ". New balance: ₹" << balance << endl;
    }

    // Method to withdraw an amount
    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance 😢" << endl;
        } else {
            balance -= amount;
            cout << "Withdrew ₹" << amount << ". Remaining balance: ₹" << balance << endl;
        }
    }

    // Method to display name and balance
    void display() {
        cout << "Depositor: " << depositorName << endl;
        cout << "Balance: ₹" << balance << endl;
    }
};

int main() {
    // Creating a bank account using the constructor
    BankAccount myAccount("Sameer", 123456, "Savings", 5000.0);

    // Performing operations
    myAccount.deposit(1500.0);
    myAccount.withdraw(2000.0);
    myAccount.display();

    return 0;
}
