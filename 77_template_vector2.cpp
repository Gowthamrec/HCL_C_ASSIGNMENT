#include <iostream>
#include <string>
using namespace std;

template<class T>
struct Vector2 {
    static_assert(!is_same<T, string>::value, "Vector2<string> is not allowed!");
    T x, y;
    Vector2(T x, T y) : x(x), y(y) {}

    Vector2 operator+(const Vector2 &o) const { return {x + o.x, y + o.y}; }
    Vector2 operator-(const Vector2 &o) const { return {x - o.x, y - o.y}; }
    Vector2 operator*(T scalar) const { return {x * scalar, y * scalar}; }

    void print() const { cout << "(" << x << ", " << y << ")" << endl; }
};

int main() {
    Vector2<float> v1(1.5f, 2.5f), v2(3.0f, 1.0f);
    (v1 + v2).print();
    (v1 - v2).print();
    (v1 * 2.0f).print();

    Vector2<int> vi(1, 2), vj(3, 4);
    (vi + vj).print();
    return 0;
}
