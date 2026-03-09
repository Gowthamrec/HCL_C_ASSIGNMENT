#include <iostream>
#include <string>
using namespace std;

int main() {
    string password;
    cout << "Enter password: ";
    cin >> password;
    if (password.length() > 8)
        cout << "Valid: length is greater than 8." << endl;
    else
        cout << "Invalid: length must be greater than 8." << endl;
    return 0;
}
