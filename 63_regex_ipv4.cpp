#include <iostream>
#include <regex>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter an IP address: ";
    cin >> input;

    regex pattern("^((25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)\\.){3}"
                  "(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)$");

    if (regex_match(input, pattern))
        cout << "Valid IPv4 address." << endl;
    else
        cout << "Invalid IPv4 address." << endl;
    return 0;
}
