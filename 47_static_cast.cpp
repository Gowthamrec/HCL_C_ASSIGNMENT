#include <iostream>
using namespace std;

enum Color { RED, GREEN, BLUE };

int main() {
    Color c = GREEN;
    int val = static_cast<int>(c);
    cout << "Color GREEN as int: " << val << endl;

    double d = 9.99;
    int i = static_cast<int>(d);
    cout << "9.99 as int: " << i << endl;
    return 0;
}
