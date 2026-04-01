#include <iostream>
using namespace std;

int toggleBit4(int n) {
    return n ^ (1 << 3);
}

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    cout << "After toggling 4th bit: " << toggleBit4(n) << endl;
    cout << "Toggle again: " << toggleBit4(toggleBit4(n)) << " (back to original)" << endl;
    return 0;
}
