//This program is prepared by 24ce043_Dev

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

ostream& alignColumn(ostream& os) {
    return os << left << setw(20);
}

int main() {


    ifstream inputFile("student_data.txt");

    if (!inputFile) {
        cerr << "Error: Unable to open the file!" << endl;
        return 1;
    }

    cout << alignColumn << "Name"
         << alignColumn << "Marks"
         << alignColumn << "Grade" << endl;
    cout << string(60, '-') << endl;

    string name, grade;
    int marks;

    while (inputFile >> ws && getline(inputFile, name, ',') && inputFile >>
marks >> ws && getline(inputFile, grade)) {
        cout << alignColumn << name
             << alignColumn << marks
             << alignColumn << grade << endl;
    }

    inputFile.close();
    cout<<"24CE045_Kalp\n";

    return 0;
}
