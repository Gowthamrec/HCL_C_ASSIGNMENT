#include <iostream>
#include <string>
using namespace std;

class Teacher {
public:
    string subject;
    Teacher(string s) : subject(s) {}
    void teach() { cout << "Teaching: " << subject << endl; }
};

class Researcher {
public:
    string field;
    Researcher(string f) : field(f) {}
    void research() { cout << "Researching: " << field << endl; }
};

class Professor : public Teacher, public Researcher {
public:
    string name;
    Professor(string n, string s, string f)
        : Teacher(s), Researcher(f), name(n) {}

    void display() {
        cout << "Professor: " << name << endl;
        teach();
        research();
    }
};

int main() {
    Professor p("Dr. Smith", "Mathematics", "Quantum Physics");
    p.display();
    return 0;
}
