#include <iostream>
#include <regex>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter a word: ";
    cin >> input;

    regex pattern("^apple$", regex_constants::icase);
    if (regex_match(input, pattern))
        cout << "Matches 'apple' (any case)." << endl;
    else
        cout << "Does not match 'apple'." << endl;
    return 0;
}
