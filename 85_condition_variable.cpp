#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <chrono>
using namespace std;

mutex mtx;
condition_variable cv;
bool ready = false;

void waiter() {
    unique_lock<mutex> lock(mtx);
    cv.wait(lock, [] { return ready; });
    cout << "Waiter: received signal!" << endl;
}

void notifier() {
    this_thread::sleep_for(chrono::seconds(2));
    {
        lock_guard<mutex> lock(mtx);
        ready = true;
    }
    cv.notify_one();
    cout << "Notifier: signal sent." << endl;
}

int main() {
    thread t1(waiter);
    thread t2(notifier);
    t1.join(); t2.join();
    return 0;
}
