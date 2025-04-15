/*
Create a class Account that stores customer name, account number, and type of
account. From this device the classes Curr-acct and Sav-acct to make them more
specific to their requirements. Include the necessary methods in order to achieve the
following tasks.
 Accept deposit from a customer and update the balance
 Display the balance
 Compute and deposit interest
 Permit withdrawal and update the balance
 Check for the minimum balance, impose penalty, if necessary and update the
balance. Do not use any constructors. Use methods to initialize the class
members.
*/


#include <iostream>
using namespace std;

// Base class: Account
class Account {
protected:
    string name;
    int accNumber;
    string accType;
    double balance;

public:
    void initialize(string n, int accNo, string type, double bal) {
        name = n;
        accNumber = accNo;
        accType = type;
        balance = bal;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "₹" << amount << " deposited. New balance: ₹" << balance << endl;
    }

    void displayBalance() {
        cout << "\nAccount Holder: " << name;
        cout << "\nAccount Number: " << accNumber;
        cout << "\nAccount Type: " << accType;
        cout << "\nCurrent Balance: ₹" << balance << endl;
    }

    double getBalance() {
        return balance;
    }

    void updateBalance(double newBalance) {
        balance = newBalance;
    }
};

// Derived class: Savings Account
class SavAcct : public Account {
public:
    void computeInterest(double rate, int years) {
        double interest = balance * rate * years / 100;
        balance += interest;
        cout << "Interest of ₹" << interest << " added." << endl;
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient funds!" << endl;
        } else {
            balance -= amount;
            cout << "₹" << amount << " withdrawn. Remaining balance: ₹" << balance << endl;
        }
    }
};

// Derived class: Current Account
class CurrAcct : public Account {
private:
    const double minBalance = 1000.0;
    const double penalty = 100.0;

public:
    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient funds!" << endl;
        } else {
            balance -= amount;
            cout << "₹" << amount << " withdrawn. Remaining balance: ₹" << balance << endl;
            checkMinBalance();
        }
    }

    void checkMinBalance() {
        if (balance < minBalance) {
            cout << "Balance below minimum! ₹" << penalty << " penalty imposed." << endl;
            balance -= penalty;
        }
    }
};

// 💻 Main Function
int main() {
    SavAcct sa;
    CurrAcct ca;

    // Initialize accounts
    sa.initialize("Pookie Girl", 1001, "Savings", 5000);
    ca.initialize("Sameer", 2002, "Current", 1200);

    // Operations on Savings Account
    cout << "\n🌸 Savings Account Operations 🌸\n";
    sa.deposit(1000);
    sa.computeInterest(5.0, 2); // 5% interest for 2 years
    sa.withdraw(2000);
    sa.displayBalance();

    // Operations on Current Account
    cout << "\n💼 Current Account Operations 💼\n";
    ca.deposit(500);
    ca.withdraw(1800); // Should impose penalty
    ca.displayBalance();

    return 0;
}
