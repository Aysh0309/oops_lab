#include<iostream>
using namespace std;

class College {
public:
    string name;
    int code;
};

int main() {
    College myCollege;

    myCollege.name = "SVNIT Surat";
    myCollege.code = 12345;

    cout << "College Name: " << myCollege.name << endl;
    cout << "College Code: " << myCollege.code << endl;

    return 0;
}