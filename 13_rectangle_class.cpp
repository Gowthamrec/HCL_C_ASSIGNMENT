#include <iostream>
using namespace std;

class Rectangle {
private:
    double width, height;

public:
    void setWidth(double w) {
        if (w <= 0) {
            cout << "Invalid width! Must be > 0. Clamped to 1." << endl;
            this->width = 1;
        } else {
            this->width = w;
        }
    }

    void setHeight(double h) {
        if (h <= 0) {
            cout << "Invalid height! Must be > 0. Clamped to 1." << endl;
            this->height = 1;
        } else {
            this->height = h;
        }
    }

    double getWidth()  { return width; }
    double getHeight() { return height; }
    double area()      { return width * height; }
};

int main() {
    Rectangle r;
    r.setWidth(5);
    r.setHeight(-3);
    cout << "Width: " << r.getWidth() << ", Height: " << r.getHeight() << endl;
    cout << "Area: " << r.area() << endl;
    return 0;
}
