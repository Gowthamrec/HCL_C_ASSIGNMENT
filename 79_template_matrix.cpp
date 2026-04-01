#include <iostream>
#include <vector>
using namespace std;

template<class T>
class Matrix {
private:
    int rows, cols;
    vector<vector<T>> data;

public:
    Matrix(int r, int c, T init = 0) : rows(r), cols(c), data(r, vector<T>(c, init)) {}

    T& at(int r, int c) { return data[r][c]; }

    Matrix operator+(const Matrix &o) const {
        Matrix result(rows, cols);
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                result.data[i][j] = data[i][j] + o.data[i][j];
        return result;
    }

    void print() const {
        for (auto &row : data) {
            for (auto &v : row) cout << v << "\t";
            cout << endl;
        }
    }
};

int main() {
    Matrix<int> a(2, 2), b(2, 2);
    a.at(0,0)=1; a.at(0,1)=2; a.at(1,0)=3; a.at(1,1)=4;
    b.at(0,0)=5; b.at(0,1)=6; b.at(1,0)=7; b.at(1,1)=8;

    cout << "A + B:" << endl;
    (a + b).print();
    return 0;
}
