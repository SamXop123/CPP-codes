#include <iostream>
using namespace std;

double balance = 0; 

void deposit() {
    double amount;
    cout << "Enter amount to deposit: ";
    cin >> amount;
    if (amount > 0) {
        balance += amount;
        cout << "Deposited ₹" << amount << " successfully.\n";
    } else {
        cout << "Invalid amount!\n";
    }
}

void withdraw() {
    double amount;
    cout << "Enter amount to withdraw: ";
    cin >> amount;
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        cout << "Withdrawn ₹" << amount << " successfully.\n";
    } else {
        cout << "Insufficient balance or invalid amount!\n";
    }
}

void checkBalance() {
    cout << "Current Balance: ₹" << balance << "\n";
}

int main() {
    int choice;

    while (true) {
        cout << "\n===== Banking Menu =====\n";
        cout << "1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: deposit(); break;
            case 2: withdraw(); break;
            case 3: checkBalance(); break;
            case 4: cout << "Exiting. Thank you!\n"; return 0;
            default: cout << "Invalid choice! Try again.\n";
        }
    }
}
