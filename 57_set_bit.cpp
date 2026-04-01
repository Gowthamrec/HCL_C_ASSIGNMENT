#include <iostream>
using namespace std;

int setBit3(int n) {
    return n | (1 << 2);
}

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    cout << "After setting 3rd bit: " << setBit3(n) << endl;
    return 0;
}
