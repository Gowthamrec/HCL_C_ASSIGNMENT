#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void openFile(const string &filename) {
    ifstream file(filename);
    if (!file.is_open())
        throw string("File not found: " + filename);
    cout << "File opened successfully." << endl;
    file.close();
}

int main() {
    try {
        openFile("missing_file.txt");
    } catch (const string &e) {
        cout << "Exception: " << e << endl;
    }
    return 0;
}
