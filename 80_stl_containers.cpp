#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {5, 3, 1, 4, 2};
    sort(v.begin(), v.end());
    cout << "Sorted vector: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    map<string, int> scores = {{"Alice", 90}, {"Bob", 85}, {"Carol", 92}};
    cout << "\nMap (scores):" << endl;
    for (auto &p : scores)
        cout << p.first << ": " << p.second << endl;

    set<int> s = {5, 3, 1, 4, 2, 3, 5};
    cout << "\nSet (unique): ";
    for (int x : s) cout << x << " ";
    cout << endl;

    multiset<int> ms = {5, 3, 1, 4, 2, 3, 5};
    cout << "\nMultiset (allows duplicates): ";
    for (int x : ms) cout << x << " ";
    cout << endl;
    return 0;
}
