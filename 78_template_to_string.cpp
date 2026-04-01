#include <iostream>
#include <string>
using namespace std;

template<class T>
string to_string_fmt(T val) {
    return std::to_string(val);
}

template<>
string to_string_fmt<string>(string val) {
    return "\"" + val + "\"";
}

int main() {
    cout << to_string_fmt(42)         << endl;
    cout << to_string_fmt(3.14)       << endl;
    cout << to_string_fmt(string("Hello")) << endl;
    return 0;
}
