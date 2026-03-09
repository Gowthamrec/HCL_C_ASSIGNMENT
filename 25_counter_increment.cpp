#include <iostream>
using namespace std;

class Counter {
private:
    int count;

public:
    Counter(int c = 0) : count(c) {}

    Counter& operator++() {
        ++count;
        return *this;
    }

    Counter operator++(int) {
        Counter temp = *this;
        ++count;
        return temp;
    }

    int getCount() { return count; }
};

int main() {
    Counter c(5);

    int y = (++c).getCount();
    cout << "After ++c: count = " << c.getCount() << ", y = " << y << endl;

    int x = (c++).getCount();
    cout << "After c++: count = " << c.getCount() << ", x = " << x << endl;
    return 0;
}
