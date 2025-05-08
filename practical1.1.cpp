#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountHolderName;
    int accountNumber;
    double balance;

public:
    BankAccount(string name, int accNum, double initialBalance) {
        accountHolderName = name;
        accountNumber = accNum;
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful. New balance: Rs" << balance << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount <= balance && amount > 0) {
            balance -= amount;
            cout << "Withdrawal successful. New balance: Rs" << balance << endl;
        } else {
            cout << "Insufficient funds or invalid amount." << endl;
        }
    }

    void checkBalance() const {
        cout << "Current balance: Rs" << balance << endl;
    }

    void displayAccountInfo() const {
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: Rs" << balance << endl;
    }
};

int main() {
    BankAccount account1("kalp patel", 1001, 500.0);

    account1.displayAccountInfo();

    account1.deposit(150.0);
    account1.withdraw(100.0);
    account1.withdraw(700.0);
    account1.checkBalance();
    cout<<"\n24CE045_kalp\n";

    return 0;
}
