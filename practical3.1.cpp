#include <iostream>
#include <vector>
using namespace std;

class Employee {
    string name;
    int basic_salary;
    int bonus;
    int total_salary;

public:
    Employee(string n, int bs, int b = 5000) {
        name = n;
        basic_salary = bs;
        bonus = b;
        total_salary = get_total_salary(bs, b); // moved inside constructor
    }

    void display() {
        cout << "\nEmployee name is " << name << endl;
        cout << "Employee basic salary is " << basic_salary << endl;
        cout << "Employee bonus is " << bonus << endl;
        cout << "Employee total salary is " << total_salary << endl;
    }

    inline static int get_total_salary(int bs, int b) {
        return bs + b;
    }
};

int main() {
    int n, b_salary, bonus, flag;
    string name;
    vector<Employee> Emp;

    cout << "Number of employees: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "\nEnter name of employee: ";
        cin >> name;

        cout << "Enter basic salary of employee: ";
        cin >> b_salary;

        cout << "Enter 1 if employee has bonus more than 5000, else 0: ";
        cin >> flag;

        if (flag == 1) {
            cout << "Enter bonus of employee: ";
            cin >> bonus;
        } else {
            bonus = 5000;
            cout << "Default bonus of employee is 5000" << endl;
        }

        // Directly use constructor (total salary will be calculated internally)
        Emp.push_back(Employee(name, b_salary, bonus));
    }

    // Display all employee records
    for (int i = 0; i < n; i++) {
        Emp[i].display();
    }

    return 0;
}
