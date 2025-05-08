//This program is prepared by 24ce043_Dev

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main() {

    ifstream file("data.txt");

    if (!file) {
        cerr << "Error: Cannot open file.\n";
        return 1;
    }

    string line;
    int lineCount = 0, wordCount = 0, charCount = 0;

    while (getline(file, line)) {
        ++lineCount;
        charCount += line.length() + 1; // +1 for the newline character

        istringstream iss(line);
        string word;
        while (iss >> word) {
            ++wordCount;
        }
    }

    file.close();

    cout << "\n--- File Statistics ---\n";
    cout << "Lines     : " << lineCount << "\n";
    cout << "Words     : " << wordCount << "\n";
    cout << "Characters: " << charCount << "\n";

    cout << "\n24CE045_Kalp\n" << endl;


    return 0;
}
