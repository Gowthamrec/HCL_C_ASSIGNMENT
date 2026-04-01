#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    char name[50];
    int rollNo;
    double marks;
};

int main() {
    string filename = "students.bin";
    Student students[3] = {
        {"Alice", 1, 95.5},
        {"Bob",   2, 87.0},
        {"Carol", 3, 91.3}
    };

    ofstream out(filename, ios::binary);
    out.write((char*)students, sizeof(students));
    out.close();

    Student read[3];
    ifstream in(filename, ios::binary);
    in.read((char*)read, sizeof(read));
    in.close();

    cout << "--- Student Records ---" << endl;
    for (int i = 0; i < 3; i++)
        cout << read[i].name << " | Roll: " << read[i].rollNo << " | Marks: " << read[i].marks << endl;
    return 0;
}
