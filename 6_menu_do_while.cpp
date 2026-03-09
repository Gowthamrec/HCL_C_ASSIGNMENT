#include <iostream>
using namespace std;

int main() {
    int choice;
    do {
        cout << "\n--- Menu ---" << endl;
        cout << "1. Say Hello" << endl;
        cout << "2. Show Square of a number" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Hello, User!" << endl;
        } else if (choice == 2) {
            int n;
            cout << "Enter number: ";
            cin >> n;
            cout << "Square: " << n * n << endl;
        } else if (choice == 3) {
            cout << "Exiting..." << endl;
        } else {
            cout << "Invalid choice. Try again." << endl;
        }
    } while (choice != 3);

    return 0;
}
