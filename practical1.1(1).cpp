/*Design a simple class BankAccount to represent a bank account. It should have
the following:
Attributes:
o Account holder's name, account number, and balance.
Methods:
o deposit(amount): to add money to the account.
o withdraw(amount): to deduct money from the account if sufficient balance
exists. Otherwise, print an error message.
o display_balance() to show the current balance.
Requirements:
o Demonstrate object-oriented principles: encapsulation and abstraction.
o Test the class by creating multiple accounts and performing operations.*/
#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string account_holder;
    string account_number;
    double balance;

public:
    // Constructor to initialize account details
    BankAccount(string holder, string accountNo, double initialBalance = 0) {
        account_holder = holder;
        account_number = accountNo;
        balance = initialBalance;
    }

    // Deposit method to add money to the account
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited " << amount << ". Current balance: " << balance << endl;
        } else {
            cout << "Deposit amount must be positive." << endl;
        }
    }

    // Withdraw method to deduct money from the account
    void withdraw(double amount) {
        if (amount > 0) {
            if (amount <= balance) {
                balance -= amount;
                cout << "Withdrew " << amount << ". Current balance: " << balance << endl;
            } else {
                cout << "Error: Insufficient funds." << endl;
            }
        } else {
            cout << "Withdrawal amount must be positive." << endl;
        }
    }

    // Method to display the current balance
    void display_balance() const {
        cout << "Account holder: " << account_holder << endl;
        cout << "Account number: " << account_number << endl;
        cout << "Current balance: " << balance << endl << endl;
    }
};

// Testing the BankAccount class
int main() {
    // Create bank account objects
    BankAccount account1("John Doe", "1234567890", 500);
    BankAccount account2("Alice Smith", "9876543210", 1000);

    // Test deposit and withdraw methods
    account1.deposit(200);
    account1.withdraw(100);
    account1.withdraw(700);  // Should trigger insufficient funds error
    account1.display_balance();

    account2.deposit(500);
    account2.withdraw(1200);  // Should trigger insufficient funds error
    account2.display_balance();

    return 0;
}
