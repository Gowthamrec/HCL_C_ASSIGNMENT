#include <iostream>
#include <string>
#include <vector>
using namespace std;

void printDiag(int val) {
    cout << "int: " << val << endl;
}

void printDiag(double val) {
    cout << "double: " << val << endl;
}

void printDiag(string val) {
    cout << "string: \"" << val << "\"" << endl;
}

void printDiag(vector<int> val) {
    cout << "vector<int>: [";
    for (int i = 0; i < val.size(); i++) {
        cout << val[i];
        if (i < val.size() - 1) cout << ", ";
    }
    cout << "]" << endl;
}

int main() {
    printDiag(42);
    printDiag(3.14);
    printDiag(string("Hello"));
    printDiag(vector<int>{1, 2, 3, 4});
    return 0;
}
