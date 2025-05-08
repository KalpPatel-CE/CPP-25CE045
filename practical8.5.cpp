//This program is prepared by 24ce043_Dev

#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class DirectoryManager {
private:
    map<string, vector<string>> directory;

public:
    void addFolder(const string& folderName) {
        if (directory.find(folderName) == directory.end()) {
            directory[folderName] = {};
            cout << "Folder '" << folderName << "' created successfully.\n";
        } else {
            cout << "Folder '" << folderName << "' already exists.\n";
        }
    }

    void addFileToFolder(const string& folderName, const string& fileName) {
        auto it = directory.find(folderName);
        if (it != directory.end()) {
            it->second.push_back(fileName);
            cout << "File '" << fileName << "' added to folder '" << folderName << "'.\n";
        } else {
            cout << "Folder '" << folderName << "' does not exist.\n";
        }
    }

    void displayDirectory() const {
        for (const auto& folder : directory) {
            cout << "Folder: " << folder.first << "\n";
            for (const auto& file : folder.second) {
                cout << "  - " << file << "\n";
            }
        }
    }
};

int main() {
    DirectoryManager manager;

    // Example usage
    manager.addFolder("Projects");
    manager.addFolder("Documents");
    manager.addFileToFolder("Projects", "project1.cpp");
    manager.addFileToFolder("Projects", "project2.cpp");
    manager.addFileToFolder("Documents", "resume.docx");
    manager.addFileToFolder("Documents", "cover_letter.docx");

    manager.displayDirectory();

    cout << "\n24CE045_Kalp\n";

    return 0;
}
