#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

int main() {
    cout << "Sleeping for 2 seconds..." << endl;
    this_thread::sleep_for(chrono::seconds(2));
    cout << "Awake!" << endl;

    cout << "Yielding thread..." << endl;
    for (int i = 0; i < 5; i++) {
        this_thread::yield();
        cout << "Iteration " << i << endl;
    }
    return 0;
}
