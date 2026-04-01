#include <iostream>
#include <regex>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    regex pattern("^[0-9]+$");
    if (regex_match(input, pattern))
        cout << "Contains only digits." << endl;
    else
        cout << "Does NOT contain only digits." << endl;
    return 0;
}
