#include <iostream>
using namespace std;

struct Flags {
    unsigned int isAdmin    : 1;
    unsigned int isActive   : 1;
    unsigned int isVerified : 1;
    unsigned int isBlocked  : 1;
};

int main() {
    Flags f;
    f.isAdmin    = 1;
    f.isActive   = 1;
    f.isVerified = 0;
    f.isBlocked  = 0;

    cout << "isAdmin:    " << f.isAdmin    << endl;
    cout << "isActive:   " << f.isActive   << endl;
    cout << "isVerified: " << f.isVerified << endl;
    cout << "isBlocked:  " << f.isBlocked  << endl;
    cout << "Size of Flags: " << sizeof(Flags) << " bytes" << endl;
    return 0;
}
