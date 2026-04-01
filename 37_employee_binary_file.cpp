#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Employee {
public:
    char name[50];
    int id;
    double salary;
};

int main() {
    string filename = "employees.bin";

    Employee emps[2] = {{"Alice", 101, 60000}, {"Bob", 102, 75000}};
    ofstream out(filename, ios::binary);
    out.write((char*)emps, sizeof(emps));
    out.close();
    cout << "Written to binary file." << endl;

    Employee readEmps[2];
    ifstream in(filename, ios::binary);
    in.read((char*)readEmps, sizeof(readEmps));
    in.close();

    cout << "\n--- Employee Records ---" << endl;
    for (int i = 0; i < 2; i++) {
        cout << "Name: " << readEmps[i].name
             << " | ID: " << readEmps[i].id
             << " | Salary: " << readEmps[i].salary << endl;
    }
    return 0;
}
