#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    string isbn, title, author;

    Book() : isbn(""), title(""), author("") {}

    void setIsbn(string i)   { isbn = i; }
    void setTitle(string t)  { title = t; }
    void setAuthor(string a) { author = a; }

    void updateTitle(const string &newTitle) { title = newTitle; }

    void print() {
        cout << "ISBN:   " << isbn << endl;
        cout << "Title:  " << title << endl;
        cout << "Author: " << author << endl;
    }
};

int main() {
    Book b;
    b.setIsbn("978-3-16-148410-0");
    b.setTitle("C++ Programming");
    b.setAuthor("Bjarne Stroustrup");
    b.print();

    b.updateTitle("The C++ Programming Language");
    cout << "\nAfter update:" << endl;
    b.print();
    return 0;
}
