#include <iostream>
#include <vector>
using namespace std;

// Function to read the matrix
void readMatrix(vector<vector<int>>& matrix, int m, int n) {

    cout << "Enter the elements of the matrix:\n";

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
}

// Function to display the matrix
void displayMatrix(const vector<vector<int>>& matrix, int m, int n) {

    cout << "\nThe matrix is:\n";

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {

    int m, n;

    cout << "Enter number of rows: ";
    cin >> m;

    cout << "Enter number of columns: ";
    cin >> n;

    // Create m x n matrix
    vector<vector<int>> matrix(m, vector<int>(n));

    // Call functions
    readMatrix(matrix, m, n);
    displayMatrix(matrix, m, n);

    return 0;
}