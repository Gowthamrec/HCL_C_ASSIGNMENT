#include <iostream>
using namespace std;

double add(double a, double b) { return a + b; }
double sub(double a, double b) { return a - b; }
double mul(double a, double b) { return a * b; }
double div(double a, double b) {
    if (b == 0) { cout << "Cannot divide by zero!" << endl; return 0; }
    return a / b;
}

int main() {
    double (*operation)(double, double);
    double a, b;
    int choice;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "1. Add  2. Subtract  3. Multiply  4. Divide" << endl;
    cout << "Enter choice: ";
    cin >> choice;

    switch (choice) {
        case 1: operation = add; break;
        case 2: operation = sub; break;
        case 3: operation = mul; break;
        case 4: operation = div; break;
        default: cout << "Invalid!"; return 0;
    }

    cout << "Result: " << operation(a, b) << endl;
    return 0;
}
