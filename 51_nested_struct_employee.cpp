#include <iostream>
#include <string>
using namespace std;

struct Address {
    string street;
    string city;
    string country;
};

struct Employee {
    int id;
    string name;
    Address address;
};

int main() {
    Employee e;
    cout << "Enter Employee ID: "; cin >> e.id;
    cin.ignore();
    cout << "Enter Name: "; getline(cin, e.name);
    cout << "Enter Street: "; getline(cin, e.address.street);
    cout << "Enter City: "; getline(cin, e.address.city);
    cout << "Enter Country: "; getline(cin, e.address.country);

    cout << "\n--- Employee Details ---" << endl;
    cout << "ID:      " << e.id << endl;
    cout << "Name:    " << e.name << endl;
    cout << "Street:  " << e.address.street << endl;
    cout << "City:    " << e.address.city << endl;
    cout << "Country: " << e.address.country << endl;
    return 0;
}
