#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountHolderName;
    int accountNumber;
    double balance;

    static int accountCounter;

public:
    BankAccount(string name, double initialBalance) {
        accountHolderName = name;
        balance = initialBalance;
        accountNumber = ++accountCounter;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful. New balance: Rs." << balance << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful. New balance: Rs." << balance << endl;
        } else {
            cout << "Withdrawal failed. Insufficient funds or invalid amount." << endl;
        }
    }

    void checkBalance() const {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Current Balance: Rs." << balance << endl;
    }

    static int getTotalAccounts() {
        return accountCounter;
    }
};

int BankAccount::accountCounter = 0;

int main() {
    BankAccount account1("Kalp Patel", 1000.0);
    BankAccount account2("Yash Shah", 1500.0);

    cout << "--- Initial Account Info ---" << endl;
    account1.checkBalance();
    cout << endl;
    account2.checkBalance();

    cout <<endl<< ">> Transactions for Kalp Patel" << endl;
    account1.deposit(200.0);
    account1.withdraw(500.0);
    account1.withdraw(2000.0);
    cout << endl;

    cout << ">> Transactions for Yash Shah" << endl;
    account2.deposit(300.0);
    account2.withdraw(100.0);
    cout << endl;

    cout << "--- Final Account Info ---" << endl;
    account1.checkBalance();
    cout << endl;
    account2.checkBalance();

    cout << "\nTotal Bank Accounts Created: " << BankAccount::getTotalAccounts() << endl;

    return 0;
}
