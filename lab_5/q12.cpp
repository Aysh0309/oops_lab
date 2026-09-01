#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    int* ptr1 = (int*) malloc(sizeof(int));

    int* ptr2 = new int;

    int* ptr3 = NULL;

    *ptr1 = 10;
    *ptr2 = 20;

    cout << "Value of ptr1 = " << *ptr1 << endl;
    cout << "Value of ptr2 = " << *ptr2 << endl;

    free(ptr1);

    delete ptr2;


    ptr1 = NULL;
    ptr2 = NULL;

    cout << "Memory released successfully." << endl;

    return 0;
}