#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

int counter = 0;
mutex mtx;

void increment(int n) {
    for (int i = 0; i < n; i++) {
        lock_guard<mutex> lock(mtx);
        counter++;
    }
}

int main() {
    thread t1(increment, 100000);
    thread t2(increment, 100000);
    t1.join(); t2.join();

    cout << "Expected: 200000" << endl;
    cout << "Actual:   " << counter << " (correct with mutex)" << endl;
    return 0;
}
