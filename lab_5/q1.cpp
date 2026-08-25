#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;
    int *arr = new int[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int minimum = arr[0];
    int maximum = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < minimum) {
            minimum = arr[i];
        }

        if (arr[i] > maximum) {
            maximum = arr[i];
        }
    }

    cout << "Minimum = " << minimum << endl;
    cout << "Maximum = " << maximum << endl;

    delete[] arr;

    return 0;
}