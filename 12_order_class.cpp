#include <iostream>
#include <vector>
using namespace std;

class Order {
private:
    vector<int> ids;
    vector<int> qtys;

public:
    void addLineItem(int id, int qty) {
        ids.push_back(id);
        qtys.push_back(qty);
        cout << "Added item ID=" << id << ", Qty=" << qty << endl;
    }

    int totalItems() {
        int total = 0;
        for (int q : qtys) total += q;
        return total;
    }

    void printSummary() {
        cout << "\n--- Order Summary ---" << endl;
        for (int i = 0; i < ids.size(); i++)
            cout << "Item ID: " << ids[i] << " | Qty: " << qtys[i] << endl;
        cout << "Total Items: " << totalItems() << endl;
    }
};

int main() {
    Order o;
    o.addLineItem(101, 3);
    o.addLineItem(102, 5);
    o.addLineItem(103, 2);
    o.printSummary();
    return 0;
}
