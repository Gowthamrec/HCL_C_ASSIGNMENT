#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream outFile("data.txt");
    if (!outFile.is_open()) {
        cout << "Failed to open file for writing." << endl;
        return 1;
    }
    outFile << "Hello, File!" << endl;
    outFile << "C++ File Handling" << endl;
    outFile.close();
    cout << "File written and closed." << endl;

    ifstream inFile("data.txt");
    if (!inFile.is_open()) {
        cout << "Failed to open file for reading." << endl;
        return 1;
    }
    string line;
    cout << "\n--- File Contents ---" << endl;
    while (getline(inFile, line))
        cout << line << endl;
    inFile.close();
    return 0;
}
