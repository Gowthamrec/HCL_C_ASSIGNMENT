#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Length: " << str.length() << endl;

    cout << "Uppercase: ";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            cout << (char)(str[i] - 32);
        else
            cout << str[i];
    }
    cout << endl;
    return 0;
}
