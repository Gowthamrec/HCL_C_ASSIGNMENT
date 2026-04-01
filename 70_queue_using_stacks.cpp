#include <iostream>
#include <stack>
using namespace std;

class QueueUsingStacks {
    stack<int> inStack, outStack;

    void transfer() {
        while (!inStack.empty()) {
            outStack.push(inStack.top());
            inStack.pop();
        }
    }

public:
    void enqueue(int val) { inStack.push(val); }

    void dequeue() {
        if (outStack.empty()) transfer();
        if (!outStack.empty()) outStack.pop();
    }

    int front() {
        if (outStack.empty()) transfer();
        return outStack.top();
    }

    bool empty() { return inStack.empty() && outStack.empty(); }
};

int main() {
    QueueUsingStacks q;
    q.enqueue(1); q.enqueue(2); q.enqueue(3);
    cout << "Front: " << q.front() << endl;
    q.dequeue();
    cout << "Front after dequeue: " << q.front() << endl;
    return 0;
}
