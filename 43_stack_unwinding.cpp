#include <iostream>
using namespace std;

class A {
public:
    A()  { cout << "A constructed" << endl; }
    ~A() { cout << "A destroyed" << endl; }
};

class B {
public:
    B()  { cout << "B constructed" << endl; }
    ~B() { cout << "B destroyed" << endl; }
};

void inner() {
    B b;
    throw runtime_error("Exception in inner()!");
}

void outer() {
    A a;
    inner();
}

int main() {
    try {
        outer();
    } catch (const runtime_error &e) {
        cout << "Caught: " << e.what() << endl;
    }
    return 0;
}
