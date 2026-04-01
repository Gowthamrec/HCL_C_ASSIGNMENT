#include <iostream>
#include <queue>
using namespace std;

class StackCostlyPush {
    queue<int> q1, q2;
public:
    void push(int val) {
        while (!q1.empty()) { q2.push(q1.front()); q1.pop(); }
        q1.push(val);
        while (!q2.empty()) { q1.push(q2.front()); q2.pop(); }
    }
    void pop() { if (!q1.empty()) q1.pop(); }
    int top() { return q1.front(); }
    bool empty() { return q1.empty(); }
};

class StackCostlyPop {
    queue<int> q1, q2;
public:
    void push(int val) { q1.push(val); }
    void pop() {
        while (q1.size() > 1) { q2.push(q1.front()); q1.pop(); }
        q1.pop();
        swap(q1, q2);
    }
    int top() {
        while (q1.size() > 1) { q2.push(q1.front()); q1.pop(); }
        int val = q1.front(); q1.pop();
        q2.push(val); swap(q1, q2);
        return val;
    }
    bool empty() { return q1.empty(); }
};

int main() {
    cout << "--- Costly Push Stack ---" << endl;
    StackCostlyPush s1;
    s1.push(1); s1.push(2); s1.push(3);
    cout << "Top: " << s1.top() << endl;
    s1.pop();
    cout << "Top after pop: " << s1.top() << endl;

    cout << "\n--- Costly Pop Stack ---" << endl;
    StackCostlyPop s2;
    s2.push(10); s2.push(20); s2.push(30);
    cout << "Top: " << s2.top() << endl;
    s2.pop();
    cout << "Top after pop: " << s2.top() << endl;
    return 0;
}
