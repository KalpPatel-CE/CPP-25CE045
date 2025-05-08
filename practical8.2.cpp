//This program is prepared by 24ce043_Dev

#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string input;
    cout << "Enter a sentence: ";
    getline(cin, input);

    // Convert punctuation to space and letters to lowercase
    for (char &ch : input) {
        if (ispunct(ch)) {
            ch = ' ';
        } else {
            ch = tolower(ch);
        }
    }

    map<string, int> wordFrequency;
    istringstream stream(input);
    string word;

    // Count word frequencies
    while (stream >> word) {
        ++wordFrequency[word];
    }

    // Display the word frequency distribution
    cout << "\nWord Frequency Distribution:\n";
    for (const auto &entry : wordFrequency) {
        cout << entry.first << ": " << entry.second << '\n';
    }

    cout << "\n24CE045_Kalp\n";

    return 0;
}
