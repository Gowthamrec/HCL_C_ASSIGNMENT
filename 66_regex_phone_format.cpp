#include <iostream>
#include <regex>
#include <string>
using namespace std;

int main() {
    string phone = "1234567890";
    regex pattern("(\\d{3})(\\d{3})(\\d{4})");
    string result = regex_replace(phone, pattern, "($1) $2-$3");
    cout << "Original: " << phone << endl;
    cout << "Formatted: " << result << endl;
    return 0;
}
