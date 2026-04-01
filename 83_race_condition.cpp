#include <iostream>
#include <thread>
using namespace std;

int counter = 0;

void increment(int n) {
    for (int i = 0; i < n; i++)
        counter++;
}

int main() {
    thread t1(increment, 100000);
    thread t2(increment, 100000);
    t1.join(); t2.join();

    cout << "Expected: 200000" << endl;
    cout << "Actual:   " << counter << " (may differ due to race condition)" << endl;
    return 0;
}
