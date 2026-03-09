#include <iostream>
using namespace std;

int main() {
    const char *strings[] = {"Hello", "World", "C++", "Pointers"};
    int n = 4;

    for (int i = 0; i < n; i++)
        cout << "strings[" << i << "] = " << *(strings + i) << endl;

    return 0;
}
