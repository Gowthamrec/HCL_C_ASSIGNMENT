#include <iostream>
using namespace std;

int main() {
    int x = 65;
    int *p = &x;
    char *cp = reinterpret_cast<char*>(p);

    cout << "Int value:  " << *p << endl;
    cout << "As char:    " << *cp << endl;
    cout << "(reinterpret_cast is unsafe - used only for low-level operations)" << endl;
    return 0;
}
