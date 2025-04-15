/* 
Assume that a bank maintains two kinds of account for its customers, one called
saving account and the other current account. The saving account provides compound
interest and withdrawal facilities but no cheque book facility. The current accountprovides cheque book facility but no interest. 
Current account holders should also maintain a minimum balance falls below this level, a service charge is imposed.
*/

#include <iostream>
#include <cmath>
using namespace std;

class Account {
protected:
    string customerName;
    int accountNumber;
    double balance;

public:
    Account(string name, int accNo, double bal) {
        customerName = name;
        accountNumber = accNo;
        balance = bal;
    }

    virtual void display() {
        cout << "\nCustomer Name: " << customerName;
        cout << "\nAccount Number: " << accountNumber;
        cout << "\nBalance: ₹" << balance << endl;
    }

    virtual void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            balance -= amount;
            cout << "Withdrawal successful. New balance: ₹" << balance << endl;
        }
    }
};

// Saving Account
class SavingAccount : public Account {
public:
    SavingAccount(string name, int accNo, double bal)
        : Account(name, accNo, bal) {}

    void computeCompoundInterest(double rate, int years) {
        double interest = balance * pow((1 + rate / 100), years) - balance;
        balance += interest;
        cout << "Compound interest added: ₹" << interest << endl;
    }

    void display() override {
        cout << "\n-- Saving Account --";
        Account::display();
        cout << "Note: No cheque book facility." << endl;
    }
};

// 💼 Current Account
class CurrentAccount : public Account {
private:
    const double minBalance = 1000.0;
    const double serviceCharge = 100.0;

public:
    CurrentAccount(string name, int accNo, double bal)
        : Account(name, accNo, bal) {}

    void checkMinimumBalance() {
        if (balance < minBalance) {
            cout << "Balance below minimum! Service charge of ₹" << serviceCharge << " imposed." << endl;
            balance -= serviceCharge;
        }
    }

    void display() override {
        cout << "\n-- Current Account --";
        Account::display();
        cout << "Note: Cheque book facility available. Minimum balance: ₹" << minBalance << endl;
    }
};

int main() {
    SavingAccount sa("Simon", 1001, 5000.0);
    sa.computeCompoundInterest(5.0, 2);  // 5% interest for 2 years
    sa.withdraw(1000);
    sa.display();

    CurrentAccount ca("Sameer", 2002, 800.0);
    ca.checkMinimumBalance();  // Should apply service charge
    ca.withdraw(300);
    ca.display();

    return 0;
}
