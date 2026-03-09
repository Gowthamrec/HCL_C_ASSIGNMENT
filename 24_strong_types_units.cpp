#include <iostream>
using namespace std;

struct Meters {
    double value;
    explicit Meters(double v) : value(v) {}
};

struct Seconds {
    double value;
    explicit Seconds(double v) : value(v) {}
};

struct MetersPerSecond {
    double value;
    explicit MetersPerSecond(double v) : value(v) {}
    void print() { cout << value << " m/s" << endl; }
};

MetersPerSecond operator/(Meters m, Seconds s) {
    return MetersPerSecond(m.value / s.value);
}

int main() {
    Meters dist(100.0);
    Seconds time(9.58);
    MetersPerSecond speed = dist / time;
    cout << "Speed: ";
    speed.print();
    return 0;
}
