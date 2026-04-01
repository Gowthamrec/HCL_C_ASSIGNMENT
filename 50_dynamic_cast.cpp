#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() { cout << "Drawing Shape" << endl; }
    virtual ~Shape() {}
};

class Circle : public Shape {
public:
    void draw() override { cout << "Drawing Circle" << endl; }
    void circleInfo() { cout << "Circle-specific info" << endl; }
};

class Rectangle : public Shape {
public:
    void draw() override { cout << "Drawing Rectangle" << endl; }
};

int main() {
    Shape *s1 = new Circle();
    Shape *s2 = new Rectangle();

    Circle *c = dynamic_cast<Circle*>(s1);
    if (c) c->circleInfo();
    else   cout << "Not a Circle" << endl;

    Circle *c2 = dynamic_cast<Circle*>(s2);
    if (c2) c2->circleInfo();
    else    cout << "s2 is not a Circle (safe failure)" << endl;

    delete s1; delete s2;
    return 0;
}
