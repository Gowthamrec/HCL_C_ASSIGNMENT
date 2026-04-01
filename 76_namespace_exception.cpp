#include <iostream>
#include <string>
using namespace std;

namespace AppErrors {
    class NotFoundException : public exception {
        string msg;
    public:
        NotFoundException(string m) : msg(m) {}
        const char* what() const noexcept override { return msg.c_str(); }
    };
}

int main() {
    try {
        throw AppErrors::NotFoundException("Record not found in database.");
    } catch (const AppErrors::NotFoundException &e) {
        cout << "Caught: " << e.what() << endl;
    }
    return 0;
}
