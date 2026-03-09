#include <iostream>
using namespace std;

int main() {
    int capacity = 2;
    int size = 0;
    int *arr = new int[capacity];

    cout << "Enter integers (-1 to stop):" << endl;
    int val;
    while (true) {
        cin >> val;
        if (val == -1) break;

        if (size == capacity) {
            capacity *= 2;
            int *newArr = new int[capacity];
            for (int i = 0; i < size; i++)
                newArr[i] = arr[i];
            delete[] arr;
            arr = newArr;
            cout << "(Array doubled to capacity " << capacity << ")" << endl;
        }
        arr[size++] = val;
    }

    cout << "Array: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    delete[] arr;
    return 0;
}
