#include <iostream>
#include <thread>
using namespace std;

int main() {
    thread t([]() {
        cout << "Thread ID: " << this_thread::get_id() << endl;
    });
    t.join();
    cout << "Main Thread ID: " << this_thread::get_id() << endl;
    return 0;
}
