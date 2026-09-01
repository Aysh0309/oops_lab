// Case 1
// void fun(const int i);
// void fun(int i);
// Important: This is NOT valid function overloading.

// You cannot overload these two functions because const on a pass-by-value parameter does not create a different function signature.

#include <iostream>
using namespace std;

void fun(char *a) {
    cout << "fun(char*) called" << endl;
}

void fun(const char *a) {
    cout << "fun(const char*) called" << endl;
}

int main() {

    char str1[] = "Hello";

    const char *str2 = "World";

    fun(str1);
    fun(str2);

    return 0;
}