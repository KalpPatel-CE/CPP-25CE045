#include <iostream>
using namespace std ;
class student
{
public:
    string name;
    string city;
    int age;
    void display(string name, string city, int age)
    {
        cout<<"Hello "<<name<<" you are from "<<city<<" and your age is "<<age<<".";
    }
};
int main()
{
    student s1, s2;
    s1.name="Kalp";
    s1.age=18;
    s1.city="Ahmedabad";

    /*cout<<"Enter your good name:";
    cin>>s1.name;
    cout<<endl<<"Enter your city name:";
    cin>>s1.city;
    cout<<endl<<"Enter your age:";
    cin>>s1.age;*/
    s1.display(s1.name, s1.city, s1.age);
    return 0;
}
