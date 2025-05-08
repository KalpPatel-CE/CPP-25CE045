#include <iostream>
#include <vector>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string accountHolder;
    double balance;

public:
    BankAccount(int accNo, string name) {
        accountNumber = accNo;
        accountHolder = name;
        balance = 0.0;
    }

    BankAccount(int accNo, string name, double initialBalance) {
        accountNumber = accNo;
        accountHolder = name;
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Rs." << amount << " deposited successfully." << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Invalid withdrawal amount!" << endl;
        } else if (amount > balance) {
            cout << "Insufficient funds! Withdrawal failed." << endl;
        } else {
            balance -= amount;
            cout << "Rs." << amount << " withdrawn successfully." << endl;
        }
    }

    void displaySummary() const {
        cout << "-----------------------------" << endl;
        cout << "Account Holder : " << accountHolder << endl;
        cout << "Account Number : " << accountNumber << endl;
        cout << "Current Balance: Rs." << balance << endl;
        cout << "-----------------------------" << endl;
    }

    int getAccountNumber() const {
        return accountNumber;
    }
};

BankAccount* findAccount(vector<BankAccount>& accounts, int accNo) {
    for (auto& acc : accounts) {
        if (acc.getAccountNumber() == accNo) {
            return &acc;
        }
    }
    return nullptr;
}

int main() {
    vector<BankAccount> accounts;
    int choice;
    int accNo;
    string name;
    double amount;

    do {
        cout << "\n=== Bank Menu ===" << endl;
        cout << "1. Create Account (No Initial Balance)" << endl;
        cout << "2. Create Account (With Initial Balance)" << endl;
        cout << "3. Deposit Money" << endl;
        cout << "4. Withdraw Money" << endl;
        cout << "5. Show Account Summary" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice (1-6): ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter account number: ";
                cin >> accNo;
                cout << "Enter account holder name: ";
                cin.ignore();
                getline(cin, name);
                accounts.push_back(BankAccount(accNo, name));
                cout << "Account created successfully!" << endl;
                break;

            case 2:
                cout << "Enter account number: ";
                cin >> accNo;
                cout << "Enter account holder name: ";
                cin.ignore();
                getline(cin, name);
                cout << "Enter initial balance: ";
                cin >> amount;
                accounts.push_back(BankAccount(accNo, name, amount));
                cout << "Account created successfully!" << endl;
                break;

            case 3:
                cout << "Enter account number: ";
                cin >> accNo;
                {
                    BankAccount* acc = findAccount(accounts, accNo);
                    if (acc) {
                        cout << "Enter amount to deposit: ";
                        cin >> amount;
                        acc->deposit(amount);
                    } else {
                        cout << "Account not found!" << endl;
                    }
                }
                break;

            case 4:
                cout << "Enter account number: ";
                cin >> accNo;
                {
                    BankAccount* acc = findAccount(accounts, accNo);
                    if (acc) {
                        cout << "Enter amount to withdraw: ";
                        cin >> amount;
                        acc->withdraw(amount);
                    } else {
                        cout << "Account not found!" << endl;
                    }
                }
                break;

            case 5:
                cout << "Enter account number: ";
                cin >> accNo;
                {
                    BankAccount* acc = findAccount(accounts, accNo);
                    if (acc) {
                        acc->displaySummary();
                    } else {
                        cout << "Account not found!" << endl;
                    }
                }
                break;

            case 6:
                cout << "Exiting... Thank you!" << endl;
                break;

            default:
                cout << "Invalid choice! Try again." << endl;
        }

    } while (choice != 6);
    cout<<"\n24CE045_kalp\n";
    return 0;
}
