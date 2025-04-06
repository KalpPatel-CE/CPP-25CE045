#include <iostream>
#include <vector>
using namespace std;

class Account {
private:
    int acc_no;
    string holder_name;
    double balance;
    static int account_count;  // Static variable to track total accounts

public:
    Account(int acc, string name, double bal) {
        acc_no = acc;
        holder_name = name;
        balance = bal;
        account_count++;
    }

    static int getAccountCount() {
        return account_count;
    }

    int getAccNo() {
        return acc_no;
    }

    void display() {
        cout << "\nAccount Number: " << acc_no;
        cout << "\nHolder Name: " << holder_name;
        cout << "\nBalance: Rs." << balance << endl;
    }

    bool deposit(double amount) {
        if (amount <= 0) return false;
        balance += amount;
        return true;
    }

    bool withdraw(double amount) {
        if (amount <= 0 || amount > balance) return false;
        balance -= amount;
        return true;
    }

    bool transferTo(Account &receiver, double amount) {
        if (withdraw(amount)) {
            receiver.deposit(amount);
            return true;
        }
        return false;
    }
};

// Initialize static variable
int Account::account_count = 0;

int main() {
    vector<Account> accounts;

    // Creating accounts dynamically
    accounts.push_back(Account(1001, "Kalp", 5000));
    accounts.push_back(Account(1002, "Yug", 3000));
    accounts.push_back(Account(1003, "Kunj", 7000));

    cout << "Total accounts created: " << Account::getAccountCount() << endl;

    // Display account info
    for (auto &acc : accounts) {
        acc.display();
    }

    // Transfer money from Alice to Bob
    cout << "\nTransferring Rs.2000 from Kalp (1001) to Yug (1002)...\n";

    Account &sender = accounts[0];   // Alice
    Account &receiver = accounts[1]; // Bob

    if (sender.transferTo(receiver, 2000)) {
        cout << "Transfer successful!\n";
    } else {
        cout << "Transfer failed! Insufficient funds.\n";
    }

    // Display updated balances
    cout << "\nUpdated Account Info:";
    sender.display();
    receiver.display();

    return 0;
}
