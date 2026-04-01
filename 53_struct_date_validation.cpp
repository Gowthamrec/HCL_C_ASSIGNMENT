#include <iostream>
using namespace std;

struct Date {
    int day, month, year;
};

Date createDate(int d, int m, int y) {
    if (m < 1 || m > 12)       throw invalid_argument("Invalid month!");
    if (d < 1 || d > 31)       throw invalid_argument("Invalid day!");
    if (y < 1900 || y > 2100)  throw invalid_argument("Invalid year!");
    return {d, m, y};
}

int main() {
    try {
        Date d = createDate(15, 8, 2024);
        cout << "Date: " << d.day << "/" << d.month << "/" << d.year << endl;

        Date bad = createDate(32, 13, 2024);
    } catch (const invalid_argument &e) {
        cout << "Error: " << e.what() << endl;
    }
    return 0;
}
