#include <iostream>
#include <string>
using namespace std;

class Student {
   
    int rollNumber;
    string name;
    float marks[3];

public:
    Student() {
        rollNumber = 0;
        name = " Not Known ";
        marks[0] = marks[1] = marks[2] = 0.0;
    }

    Student(int r, string n, float m1, float m2, float m3) {
        rollNumber = r;
        name = n;
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
    }

    float calculateAverage() {
        return (marks[0] + marks[1] + marks[2]) / 3.0;
    }

    void displayDetails() {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks[0] << ", " << marks[1] << ", " << marks[2] << endl;
        cout << "Average Marks: " << calculateAverage() << endl;
    }
};

int main() {
    Student student1;
    Student student2(100,"Harshil", 85.5, 80.0, 85.0);
    Student student3(102, "Kalp", 60.0, 70.5, 75.0);

    cout << "Student 1 (Default):" << endl;
    student1.displayDetails();
    cout << endl;

    cout << "Student 2 :" << endl;
    student2.displayDetails();
    cout << endl;

    cout << "Student 3 :" << endl;
    student3.displayDetails();
    cout << endl;
    cout<<"-------------------------------------------------------------------"<<endl;
    cout<<"24CE045_Kalp Patel";

    return 0;
}
