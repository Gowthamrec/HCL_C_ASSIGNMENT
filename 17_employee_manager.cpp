#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string name;
    double salary;

public:
    Employee(string n, double s) : name(n), salary(s) {}

    virtual void display() {
        cout << "Name:   " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

class Manager : public Employee {
private:
    string department;

public:
    Manager(string n, double s, string d) : Employee(n, s), department(d) {}

    void display() override {
        Employee::display();
        cout << "Department: " << department << endl;
    }
};

int main() {
    Employee e("Alice", 50000);
    cout << "--- Employee ---" << endl;
    e.display();

    Manager m("Bob", 80000, "Engineering");
    cout << "\n--- Manager ---" << endl;
    m.display();
    return 0;
}
