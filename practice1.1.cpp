#include <iostream>
using namespace std;

class bank_acc
{
    int acc_no;
    string name;
    long int balance;
public:
    void get_data()
    {
        cout<<"Enter your account number: "; cin>>acc_no;
        cout<<"Enter your your name: "; cin>>name;
        cout<<"Enter your balance amount: "; cin>>balance;
    }
    void deposit_amount()
    {
        int no;
        cout<<"Enter your deposit amount: "; cin>>no;
        balance = balance+no;
    }
    void withdraw_amount()
    {
        int no;
        cout<<"Enter your withdrawal amount: "; cin>>no;
        if (no<=balance){
        balance = balance-no;}
        else
        {
            cout<<"you can't withdraw this amount please try less"<< endl;
        }
    }
    void display_balance()
    {
        cout<<"your balance is:"<<balance;
    }
};
int main()
{
    bank_acc b1, b2;
    b1.get_data();
    b1.deposit_amount();
    b1.withdraw_amount();
    b1.display_balance();
    cout<< endl;
    b2.get_data();
    b2.deposit_amount();
    b2.withdraw_amount();
    b2.display_balance();
    return 0;
}
