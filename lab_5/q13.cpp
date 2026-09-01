#include <iostream>
using namespace std;

void towerOfHanoi(int n, int source, int auxiliary, int destination) {

    // Base case
    if (n == 1) {
        cout << "Shift top disk from tower "
             << source << " to tower "
             << destination << endl;
        return;
    }

    towerOfHanoi(n - 1, source, destination, auxiliary);

    cout << "Shift top disk from tower "
         << source << " to tower "
         << destination << endl;

    towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main() {

    int n = 3;

    cout << "Steps to shift 3 disks from tower 1 to tower 2:\n\n";

    towerOfHanoi(3, 1, 3, 2);

    return 0;
}