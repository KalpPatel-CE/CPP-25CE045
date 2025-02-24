#include <iostream>
#include <windows.h>
using namespace std;
class account
{
    int account_no;
    int balance;
    string password;
    string name;
public:
    account(int no)
    {
        account_no = no;
    }
    void get_data()
    {
        cout >> "Welcome to our login potal"
        cout << "Enter name :";
        cin >> name;
        cout << "Enter password :";
        cin >> password;
        cout << "Enter your balance (min:$1000) :";
        cin >> balance;
        cout << "Your account number is : " <<aaount_no;
    }
};
int main()
{
    int a;
    account user1(0001);
    cout << "Enter the no given before to do that task :";
    cout << "1. Open new account," << endl;
    cout << "2. Deposit amount," << endl;
    cout << "3. Withdraw amount," << endl;
    cout << "4. EXIT." << endl;
    cout << "Enter no between 1 and 4: ";
    cin >>a;
    if(a=1)

}
