#include <iostream>
using namespace std;

class MyClass {
public:
    int value;
    MyClass(int v) : value(v) {}

    void setValue(const MyClass *obj, int newVal) {
        MyClass *modifiable = const_cast<MyClass*>(obj);
        modifiable->value = newVal;
    }
};

int main() {
    const MyClass obj(42);
    cout << "Before: " << obj.value << endl;

    MyClass m(0);
    m.setValue(&obj, 100);
    cout << "After:  " << obj.value << endl;
    return 0;
}
