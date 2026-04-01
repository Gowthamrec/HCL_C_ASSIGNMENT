#include <iostream>
#include <string>
#include <memory>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;
    virtual ~Shape() {}
};

class Circle : public Shape {
public:
    void draw() override { cout << "Drawing Circle" << endl; }
};

class Rectangle : public Shape {
public:
    void draw() override { cout << "Drawing Rectangle" << endl; }
};

unique_ptr<Shape> createShape(const string &type) {
    if (type == "circle")    return make_unique<Circle>();
    if (type == "rectangle") return make_unique<Rectangle>();
    return nullptr;
}

int main() {
    string type;
    cout << "Enter shape (circle/rectangle): ";
    cin >> type;

    auto shape = createShape(type);
    if (shape) shape->draw();
    else       cout << "Unknown shape." << endl;
    return 0;
}
