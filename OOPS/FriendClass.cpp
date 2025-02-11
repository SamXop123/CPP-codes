#include <iostream>
using namespace std;

// Forward declaration of class
class BankManager;

class BankAccount {
private:
    string owner;
    double balance;

public:
    BankAccount(string ownerName, double initialBalance) {
        owner = ownerName;
        balance = initialBalance;
    }

    // Declaring BankManager as a friend class
    friend class BankManager;
};

class BankManager {
public:
    void showAccountDetails(BankAccount account) {
        // BankManager can access private members of BankAccount
        cout << "Owner: " << account.owner << endl;
        cout << "Balance: $" << account.balance << endl;
    }
};

int main() {
    BankAccount myAccount("Sameer", 5000.75);
    BankManager manager;
    manager.showAccountDetails(myAccount); // Accessing private data because of friend class

    return 0;
}
