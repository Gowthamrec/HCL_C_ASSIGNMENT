#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    double x, y;
};

double distance(Point a, Point b) {
    return sqrt((b.x - a.x) * (b.x - a.x) + (b.y - a.y) * (b.y - a.y));
}

double distance(double x1, double y1, double x2, double y2) {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

double distance(Point a) {
    return sqrt(a.x * a.x + a.y * a.y);
}

int main() {
    Point p1 = {0, 0}, p2 = {3, 4};

    cout << "Between two Points:       " << distance(p1, p2) << endl;
    cout << "Between two coordinates:  " << distance(0, 0, 3, 4) << endl;
    cout << "From origin:              " << distance(p2) << endl;
    return 0;
}
