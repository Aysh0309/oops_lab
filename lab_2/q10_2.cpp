#include <iostream>
using namespace std;

int main() {
    int count = 0;

    cout << "Prime numbers between 100 and 200 are:\n";

    for (int n = 100; n <= 200; n++) {
        bool prime = true;
       
            for (int i = 2; i * i <= n; i++) {
                if (n % i == 0) {
                    prime = false;
                    break;
                }
            
        }

        if (prime) {
            cout << n << " ";
            count++;
        }
    }

    cout << "\n\nTotal Prime Numbers = " << count << endl;

    return 0;
}