#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

int toInt(const string &s) {
    for (char c : s) {
        if (!isdigit(c) && c != '-')
            throw invalid_argument("Non-numeric string: " + s);
    }
    return stoi(s);
}

int main() {
    try {
        cout << toInt("123") << endl;
        cout << toInt("abc") << endl;
    } catch (const invalid_argument &e) {
        cout << "Exception: " << e.what() << endl;
    }
    return 0;
}
