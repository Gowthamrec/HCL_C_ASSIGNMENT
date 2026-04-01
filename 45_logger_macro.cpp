#include <iostream>
using namespace std;

#define LOG(msg) cout << "[LOG] " << __FILE__ << ":" << __LINE__ << " in " << __func__ << "() => " << msg << endl

void functionA() {
    LOG("Inside functionA");
}

void functionB() {
    LOG("Inside functionB");
}

int main() {
    LOG("Program started");
    functionA();
    functionB();
    LOG("Program ended");
    return 0;
}
