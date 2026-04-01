#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int rollNo;
    double marks;

    void input() {
        cout << "Name: "; cin >> name;
        cout << "Roll No: "; cin >> rollNo;
        cout << "Marks: "; cin >> marks;
    }

    void display() {
        cout << "Name: " << name << " | Roll: " << rollNo << " | Marks: " << marks << endl;
    }
};

int main() {
    int n;
    cout << "How many students? ";
    cin >> n;

    Student *students = new Student[n];
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << ":" << endl;
        students[i].input();
    }

    cout << "\n--- Student Records ---" << endl;
    for (int i = 0; i < n; i++)
        students[i].display();

    delete[] students;
    return 0;
}
