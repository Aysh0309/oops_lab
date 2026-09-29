#include <iostream>
using namespace std;

class Matrix {
    int mat[2][2];

public:
    void input() {
        cout << "Enter 4 elements: ";
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                cin >> mat[i][j];
    }

    friend Matrix add(Matrix, Matrix);

    void display() {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++)
                cout << mat[i][j] << " ";
            cout << endl;
        }
    }
};

Matrix add(Matrix a, Matrix b) {
    Matrix c;

    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            c.mat[i][j] = a.mat[i][j] + b.mat[i][j];

    return c;
}

int main() {
    Matrix m1, m2, m3;

    m1.input();
    m2.input();

    m3 = add(m1, m2);

    cout << "Sum of matrices:\n";
    m3.display();

    return 0;
}