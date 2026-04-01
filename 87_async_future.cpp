#include <iostream>
#include <future>
using namespace std;

long long factorial(int n) {
    long long result = 1;
    for (int i = 2; i <= n; i++) result *= i;
    return result;
}

int main() {
    int n;
    cout << "Enter n for factorial: ";
    cin >> n;

    future<long long> fut = async(launch::async, factorial, n);
    cout << "Computing in background..." << endl;

    cout << "Factorial(" << n << ") = " << fut.get() << endl;
    return 0;
}
