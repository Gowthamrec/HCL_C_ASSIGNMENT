#include <iostream>
using namespace std;

namespace Company {
    namespace HR {
        void displayPolicy() {
            cout << "HR Policy: 5 days work week, 20 days annual leave." << endl;
        }
    }
}

int main() {
    Company::HR::displayPolicy();
    return 0;
}
