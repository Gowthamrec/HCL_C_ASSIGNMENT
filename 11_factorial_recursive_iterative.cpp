#include <iostream>
using namespace std;

long long factRecursive(int n) {
    if (n <= 1) return 1;
    return n * factRecursive(n - 1);
}

long long factIterative(int n) {
    long long result = 1;
    for (int i = 2; i <= n; i++)
        result *= i;
    return result;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Recursive: " << factRecursive(n) << endl;
    cout << "Iterative: " << factIterative(n) << endl;
    return 0;
}
