#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node(int d) : data(d), next(nullptr) {}
};

Node* detectCycle(Node *head) {
    Node *slow = head, *fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) return slow;
    }
    return nullptr;
}

void removeCycle(Node *head) {
    Node *meet = detectCycle(head);
    if (!meet) { cout << "No cycle detected." << endl; return; }

    Node *start = head;
    while (start != meet) {
        start = start->next;
        meet = meet->next;
    }

    Node *tail = meet;
    while (tail->next != start)
        tail = tail->next;
    tail->next = nullptr;
    cout << "Cycle removed." << endl;
}

int main() {
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = head->next;

    removeCycle(head);

    Node *curr = head;
    while (curr) { cout << curr->data << " "; curr = curr->next; }
    cout << endl;
    return 0;
}
