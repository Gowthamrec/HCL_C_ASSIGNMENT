#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }

    int checksum = 0;
    for (int i = 0; i < n; i++)
        checksum ^= arr[i];

    cout << "XOR Checksum: " << checksum << endl;
    return 0;
}
