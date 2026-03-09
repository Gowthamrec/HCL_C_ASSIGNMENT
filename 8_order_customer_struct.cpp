#include <iostream>
#include <string>
using namespace std;

struct Customer {
    string name;
    string email;
};

struct Order {
    int orderId;
    double amount;
    Customer customer;
};

int main() {
    Order o;
    cout << "Enter Order ID: ";
    cin >> o.orderId;
    cout << "Enter Amount: ";
    cin >> o.amount;
    cin.ignore();
    cout << "Enter Customer Name: ";
    getline(cin, o.customer.name);
    cout << "Enter Customer Email: ";
    getline(cin, o.customer.email);

    cout << "\n--- Order Details ---" << endl;
    cout << "Order ID : " << o.orderId << endl;
    cout << "Amount   : " << o.amount << endl;
    cout << "Customer : " << o.customer.name << endl;
    cout << "Email    : " << o.customer.email << endl;
    return 0;
}
