#include <iostream>
using namespace std;

enum Permission { READ = 1, WRITE = 2, EXECUTE = 4 };

struct UserRole {
    unsigned int read    : 1;
    unsigned int write   : 1;
    unsigned int execute : 1;
    unsigned int role    : 3;
};

int main() {
    UserRole user;
    user.read = 1;
    user.write = 1;
    user.execute = 0;
    user.role = 2;

    cout << "Read:    " << user.read << endl;
    cout << "Write:   " << user.write << endl;
    cout << "Execute: " << user.execute << endl;
    cout << "Role:    " << user.role << endl;
    return 0;
}
