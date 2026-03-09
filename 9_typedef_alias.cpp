#include <iostream>
#include <string>
using namespace std;

struct Point {
    int x, y;
};

typedef Point Pt;
using Coordinate = Point;

int main() {
    Pt p1;
    p1.x = 3; p1.y = 4;
    cout << "Pt (typedef): (" << p1.x << ", " << p1.y << ")" << endl;

    Coordinate c1;
    c1.x = 7; c1.y = 8;
    cout << "Coordinate (using): (" << c1.x << ", " << c1.y << ")" << endl;
    return 0;
}
