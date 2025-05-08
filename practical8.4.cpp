//This program is prepared by 24ce043_Dev

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <limits>

using namespace std;

struct Student {
    string name;
    int score;
};

bool compareStudents(const Student &a, const Student &b) {
    return a.score > b.score;
}

int main() {
    vector<Student> students;
    int n;

    cout << "Enter the number of students: ";
    cin >> n;

    if (n <= 0) {
        cout << "No students to rank.\n";
        return 0;
    }

    for (int i = 0; i < n; ++i) {
        Student s;
        cout << "Enter name of student " << i + 1 << ": ";
        cin >> s.name;
        cout << "Enter score of student " << i + 1 << ": ";
        while (!(cin >> s.score) || s.score < 0) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid score. Please enter a non-negative integer: ";
        }
        students.push_back(s);
    }

    sort(students.begin(), students.end(), compareStudents);

    cout << "\nRanked List of Students:\n";
    for (size_t i = 0; i < students.size(); ++i) {
        cout << "Rank " << i + 1 << ": " << students[i].name << " - " << students[i].score << "\n";
    }

    cout << "\n24CE045_Kalp\n";

    return 0;
}
