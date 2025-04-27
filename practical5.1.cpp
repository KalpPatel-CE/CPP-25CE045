#include<iostream>
using namespace std;
class Calculator
{
    public:
    int Add_numbers(int num1, int num2)
    {
        return num1+num2;
    }
    float Add_numbers(float fnum1,float fnum2)
    {
        return fnum1+fnum2;
    }
};
int main()
{
    Calculator Cal;
    int choice, number1 , number2 ,answere;
    float fnumber1,fnumber2,fanswere;
    cout<<"Enter 1 to add intigers"<<endl;
    cout<<"Enter 2 to add floating point numbers"<<endl;
    cout<<"Enter your choice : ";
    cin>>choice;
    switch(choice){
        case 1:
        cout<<"Enter 1st number : ";
        cin>>number1;
        cout<<"Enter 2nd number : ";
        cin>>number2;
        answere=Cal.Add_numbers(number1,number2);
        cout<<"Sumation of 2 intiger number is "<<answere<<endl;
        break;
        case 2:
        cout<<"Enter 1st number : ";
        cin>>fnumber1;
        cout<<"Enter 2nd number : ";
        cin>>fnumber2;
        fanswere=Cal.Add_numbers(fnumber1,fnumber2);
        cout<<"Sumation of 2 floating-point number is "<<fanswere<<endl;
        break;
        default: 
        cout<<"INVALID CHOICE";

    }
}
