#include <iostream>
using namespace std;

#define ASSERT(cond) \
    if (!(cond)) \
        cout << "[ASSERT FAILED] " << __FILE__ << ":" << __LINE__ << " => " << #cond << endl; \
    else \
        cout << "[ASSERT PASSED] " << #cond << endl;

int main() {
    cout << "File:     " << __FILE__ << endl;
    cout << "Line:     " << __LINE__ << endl;

#ifdef __VERSION__
    cout << "Compiler: GCC " << __VERSION__ << endl;
#else
    cout << "Compiler version not available." << endl;
#endif

    int x = 10;
    ASSERT(x == 10);
    ASSERT(x > 20);
    return 0;
}
