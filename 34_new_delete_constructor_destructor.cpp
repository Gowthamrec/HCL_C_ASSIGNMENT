#include <iostream>
#include <string>
using namespace std;

class Box {
public:
    string label;

    Box(string l) : label(l) {
        cout << "Constructor: " << label << endl;
    }

    ~Box() {
        cout << "Destructor: " << label << endl;
    }
};

int main() {
    Box *b = new Box("MyBox");
    cout << "Using box: " << b->label << endl;
    delete b;
    return 0;
}
