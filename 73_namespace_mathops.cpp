#include <iostream>
using namespace std;

namespace MathOps {
    int add(int a, int b)      { return a + b; }
    int subtract(int a, int b) { return a - b; }
}

int main() {
    cout << "Add:      " << MathOps::add(10, 5)      << endl;
    cout << "Subtract: " << MathOps::subtract(10, 5) << endl;
    return 0;
}
