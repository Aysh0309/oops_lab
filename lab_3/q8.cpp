#include<iostream>
#include<vector>
using namespace std;

class Book {
public:
    string name;

    Book(string n) {
        name = n;
    }
};

class Library {
public:
    vector<Book> b;

    void add(string n) {
        b.push_back(Book(n));
    }

    void remove(string n) {
        for(int i = 0; i < b.size(); i++) {
            if(b[i].name == n) {
                b.erase(b.begin() + i);
                return;
            }
        }
    }

    void show() {
        for(auto x : b)
            cout << x.name << endl;
    }
};

int main() {
    Library l;

    l.add("C++");
    l.add("Java");
    l.add("Python");
    l.add("Sql");
    cout << "Books:" << endl;
    l.show();

    l.remove("Java");

    cout << "\nAfter removing Java:" << endl;
    l.show();

    return 0;
}