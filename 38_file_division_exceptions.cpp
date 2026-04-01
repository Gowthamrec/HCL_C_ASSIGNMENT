#include <iostream>
#include <fstream>
#include <string>
#include <stdexcept>
using namespace std;

double divide(double a, double b) {
    if (b == 0) throw runtime_error("Division by zero!");
    return a / b;
}

int main() {
    try {
        ifstream file("numbers.txt");
        if (!file.is_open()) throw runtime_error("Cannot open file!");

        double a, b;
        while (file >> a >> b) {
            cout << a << " / " << b << " = " << divide(a, b) << endl;
        }
        file.close();
    } catch (const runtime_error &e) {
        cout << "Error: " << e.what() << endl;
    }
    return 0;
}
