#include <iostream>
#include <string>
using namespace std;

struct Car {
    string name;
    int year;
    double price;
};

int main() {
    Car c = {"Toyota Camry", 2023, 25000.0};
    Car *ptr = &c;

    cout << "Using ->  operator:" << endl;
    cout << "Name:  " << ptr->name << endl;
    cout << "Year:  " << ptr->year << endl;
    cout << "Price: " << ptr->price << endl;

    ptr->price = 27000.0;
    cout << "\nAfter price update: " << ptr->price << endl;
    return 0;
}
