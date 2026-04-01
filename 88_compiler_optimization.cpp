#include <iostream>
#include <chrono>
using namespace std;

long long heavyArithmetic(int n) {
    long long sum = 0;
    for (int i = 0; i < n; i++)
        sum += i * i - i + 1;
    return sum;
}

int main() {
    auto start = chrono::high_resolution_clock::now();
    long long result = heavyArithmetic(100000000);
    auto end = chrono::high_resolution_clock::now();

    chrono::duration<double> elapsed = end - start;
    cout << "Result:  " << result << endl;
    cout << "Time:    " << elapsed.count() << " seconds" << endl;
    cout << "(Compile with -O0, -O1, -O2, -O3 to compare)" << endl;
    return 0;
}
