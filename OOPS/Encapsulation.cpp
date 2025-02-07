#include <iostream>
using namespace std;

class BankAccount {
private:
    int balance;

public:
    BankAccount() { balance = 0; }  // Constructor

    void deposit(int amount) {
        balance += amount;
    }

    int getBalance() {
        return balance;
    }
};

int main() {
    BankAccount account;
    account.deposit(1000);
    cout << "Balance: " << account.getBalance() << endl;
    return 0;
}
