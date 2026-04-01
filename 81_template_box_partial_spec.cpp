#include <iostream>
using namespace std;

template<class T>
class Box {
    T value;
public:
    Box(T v) : value(v) {}
    T get() { return value; }
};

template<class T>
class Box<T*> {
    T* ptr;
public:
    Box(T* p) : ptr(p) {}
    T* get()   { return ptr; }
    void reset(T* p) { ptr = p; }
};

int main() {
    Box<int> b1(42);
    cout << "Box<int>: " << b1.get() << endl;

    int val = 99;
    Box<int*> b2(&val);
    cout << "Box<int*>: " << *b2.get() << endl;

    int newVal = 55;
    b2.reset(&newVal);
    cout << "After reset: " << *b2.get() << endl;
    return 0;
}
