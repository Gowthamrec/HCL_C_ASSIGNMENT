#include <iostream>
#include <string>
using namespace std;

class MyException : public exception {
private:
    string msg;
public:
    MyException(string m) : msg(m) {}
    const char* what() const noexcept override { return msg.c_str(); }
};

void setSalary(double salary) {
    if (salary < 0)
        throw MyException("Salary cannot be negative!");
}

int main() {
    double s;
    cout << "Enter salary: ";
    cin >> s;
    try {
        setSalary(s);
        cout << "Salary set: " << s << endl;
    } catch (const MyException &e) {
        cout << "MyException: " << e.what() << endl;
    }
    return 0;
}
