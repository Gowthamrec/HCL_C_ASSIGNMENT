#include <iostream>
#include <stdexcept>
using namespace std;

class Rectangle {
private:
    double width, height;

public:
    void setWidth(double w) {
        if (w <= 0) throw invalid_argument("Width must be > 0");
        width = w;
    }

    void setHeight(double h) {
        if (h <= 0) throw invalid_argument("Height must be > 0");
        height = h;
    }

    double area() { return width * height; }
};

int main() {
    Rectangle r;
    try {
        r.setWidth(10);
        r.setHeight(-5);
    } catch (const invalid_argument &e) {
        cout << "Error: " << e.what() << endl;
    }

    try {
        r.setWidth(10);
        r.setHeight(5);
        cout << "Area: " << r.area() << endl;
    } catch (const invalid_argument &e) {
        cout << "Error: " << e.what() << endl;
    }
    return 0;
}
