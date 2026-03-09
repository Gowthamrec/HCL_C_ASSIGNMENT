#include <iostream>
#include <string>
using namespace std;

class Device {
public:
    string brand;
    Device(string b) : brand(b) {}
    void showBrand() { cout << "Brand: " << brand << endl; }
};

class Mobile : public Device {
public:
    string network;
    Mobile(string b, string n) : Device(b), network(n) {}
    void showNetwork() { cout << "Network: " << network << endl; }
};

class Smartphone : public Mobile {
public:
    int ram;
    Smartphone(string b, string n, int r) : Mobile(b, n), ram(r) {}
    void show() {
        showBrand();
        showNetwork();
        cout << "RAM: " << ram << "GB" << endl;
    }
};

int main() {
    Smartphone s("Samsung", "5G", 8);
    s.show();
    return 0;
}
