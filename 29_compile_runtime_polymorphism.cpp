#include <iostream>
#include <cmath>
using namespace std;

class MathOps {
public:
    int pow(int base, int exp) {
        int result = 1;
        for (int i = 0; i < exp; i++) result *= base;
        return result;
    }

    double pow(double base, double exp) {
        return std::pow(base, exp);
    }
};

class Function {
public:
    virtual double evaluate(double x) = 0;
    virtual ~Function() {}
};

class Square : public Function {
public:
    double evaluate(double x) override { return x * x; }
};

class Cube : public Function {
public:
    double evaluate(double x) override { return x * x * x; }
};

int main() {
    MathOps m;
    cout << "Compile-time (int pow):    " << m.pow(2, 8) << endl;
    cout << "Compile-time (double pow): " << m.pow(2.0, 0.5) << endl;

    Function *f1 = new Square();
    Function *f2 = new Cube();
    cout << "Runtime (Square at 3): " << f1->evaluate(3) << endl;
    cout << "Runtime (Cube at 3):   " << f2->evaluate(3) << endl;

    delete f1; delete f2;
    return 0;
}
