#include <iostream>
#include <string>
using namespace std;

class Device {
public:
    string brand;
    Device(string b) : brand(b) {}
    void showBrand() { cout << "Brand: " << brand << endl; }
};

class Phone : virtual public Device {
public:
    Phone(string b) : Device(b) {}
    void call() { cout << "Making a call..." << endl; }
};

class Camera : virtual public Device {
public:
    Camera(string b) : Device(b) {}
    void capture() { cout << "Capturing photo..." << endl; }
};

class SmartPhone : public Phone, public Camera {
public:
    SmartPhone(string b) : Device(b), Phone(b), Camera(b) {}
    void show() {
        showBrand();
        call();
        capture();
    }
};

int main() {
    SmartPhone sp("Apple");
    sp.show();
    return 0;
}
