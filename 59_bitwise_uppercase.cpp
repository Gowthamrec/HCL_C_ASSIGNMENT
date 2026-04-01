#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a lowercase string: ";
    cin >> str;

    cout << "Uppercase: ";
    for (char c : str) {
        if (c >= 'a' && c <= 'z')
            cout << (char)(c & ~32);
        else
            cout << c;
    }
    cout << endl;
    return 0;
}
