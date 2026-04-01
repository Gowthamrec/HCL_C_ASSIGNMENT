#include <iostream>
using namespace std;

void modifyValue(int **pp) {
    **pp = 999;
}

int main() {
    int val = 10;
    int *ptr = &val;
    int **pptr = &ptr;

    cout << "Before: val = " << val << endl;
    modifyValue(pptr);
    cout << "After:  val = " << val << endl;
    return 0;
}
