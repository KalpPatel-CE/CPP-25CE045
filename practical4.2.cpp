#include <iostream>
# include <vector>
using namespace std;
class person {
protected:
    string name;
    int age;
public:
    person (string n, int a){
        name = n;
        age = a;
    }
    void display(){
        cout<<endl<<"Name is "<<name<<endl;
        cout<<"Age is "<<age<<endl;
    }
};
class employee : protected person {
protected:
    int emp_id;
public:
    employee (int i, string n, int a) : person(n,a){
        emp_id = i;
    }
    void display_1(){
        display();
        cout<<"Employee ID is "<<emp_id<<endl;
    }
};
class manager : protected employee {
    string department;
public:
    manager (string d, int i, string n, int a) : employee(i,n,a){
        department = d;
    }
    void display_2(){
        display_1();
        cout<<"Department is "<<department<<endl;
    }
};
int main(){
    vector<manager>m;
    int n;
    string name, department;
    int age, emp_id;
    cout<<"Enter no. of managers: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter name of manager: ";
        cin>>name;
        cout<<"Enter age of manager: ";
        cin>>age;
        cout<<"Enter ID of manager: ";
        cin>>emp_id;
        cout<<"Enter Department of manager: ";
        cin>>department;
        m.push_back(manager(department, emp_id, name, age));
    }
    for (int i = 0; i < n; i++)
    {
        m[i].display_2();
    }
    
}
