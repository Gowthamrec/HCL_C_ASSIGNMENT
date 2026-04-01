#include <iostream>
#include <regex>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter a URL: ";
    cin >> input;

    regex pattern("^https?://[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}(/.*)?$");

    if (regex_match(input, pattern))
        cout << "Valid HTTP/HTTPS URL." << endl;
    else
        cout << "Invalid URL." << endl;
    return 0;
}
