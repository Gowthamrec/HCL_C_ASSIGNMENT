#include <iostream>
using namespace std;

void checkNegative(int n) {
    if (n < 0) throw runtime_error("Negative number entered!");
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    try {
        checkNegative(num);
        cout << "Number accepted: " << num << endl;
    } catch (const runtime_error &e) {
        cout << "Exception: " << e.what() << endl;
    }
    return 0;
}
