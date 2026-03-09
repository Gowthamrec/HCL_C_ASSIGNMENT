#include <iostream>
#include <initializer_list>
using namespace std;

class Matrix {
private:
    int rows, cols;
    int **data;

public:
    Matrix(int r, int c, initializer_list<int> values) : rows(r), cols(c) {
        data = new int*[rows];
        for (int i = 0; i < rows; i++)
            data[i] = new int[cols];

        auto it = values.begin();
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                data[i][j] = (it != values.end()) ? *it++ : 0;
    }

    ~Matrix() {
        for (int i = 0; i < rows; i++)
            delete[] data[i];
        delete[] data;
        cout << "Matrix destructor called." << endl;
    }

    void print() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++)
                cout << data[i][j] << "\t";
            cout << endl;
        }
    }
};

int main() {
    Matrix m(2, 3, {1, 2, 3, 4, 5, 6});
    m.print();
    return 0;
}
