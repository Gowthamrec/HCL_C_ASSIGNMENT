#include <iostream>
#include <string>
using namespace std;

namespace Geometry {
    struct Circle {
        double radius;
        double area() { return 3.14159 * radius * radius; }
    };
}

int main() {
    Geometry::Circle c;
    c.radius = 5.0;
    cout << "Circle area: " << c.area() << endl;
    return 0;
}
