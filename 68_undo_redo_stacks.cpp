#include <iostream>
#include <stack>
#include <string>
using namespace std;

class TextEditor {
private:
    string text;
    stack<string> undoStack;
    stack<string> redoStack;

public:
    void type(char c) {
        undoStack.push(text);
        while (!redoStack.empty()) redoStack.pop();
        text += c;
    }

    void backspace() {
        if (text.empty()) return;
        undoStack.push(text);
        while (!redoStack.empty()) redoStack.pop();
        text.pop_back();
    }

    void undo() {
        if (undoStack.empty()) { cout << "(nothing to undo)" << endl; return; }
        redoStack.push(text);
        text = undoStack.top(); undoStack.pop();
    }

    void redo() {
        if (redoStack.empty()) { cout << "(nothing to redo)" << endl; return; }
        undoStack.push(text);
        text = redoStack.top(); redoStack.pop();
    }

    void print() { cout << "Text: \"" << text << "\"" << endl; }
};

int main() {
    TextEditor e;
    e.type('H'); e.type('e'); e.type('l'); e.type('l'); e.type('o');
    e.print();
    e.backspace(); e.print();
    e.undo(); e.print();
    e.redo(); e.print();
    return 0;
}
