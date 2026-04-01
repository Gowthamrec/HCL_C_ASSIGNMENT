#include <iostream>
using namespace std;

#define SQR_BAD(x)  x * x

#define SQR(x)  ((x) * (x))

inline int sqrInline(int x) { return x * x; }

int main() {
    int a = 3, b = 4;

    cout << "SQR_BAD(a+b) = " << SQR_BAD(a + b) << endl;
    cout << "SQR(a+b)     = " << SQR(a + b)     << endl;
    cout << "sqrInline(a+b) = " << sqrInline(a + b) << endl;
    return 0;
}
