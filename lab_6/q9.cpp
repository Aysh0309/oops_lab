#include <iostream>
using namespace std;

class Book {
private:
    int bookId;
    string title;
    float price;

public:

    Book() {
        bookId = 0;
        title = "";
        price = 0;
    }

    Book(int id, string t, float p) {
        bookId = id;
        title = t;
        price = p;
    }

    void accept() {
        cout << "Enter Book ID: ";
        cin >> bookId;

        cout << "Enter Title: ";
        cin >> title;

        cout << "Enter Price: ";
        cin >> price;
    }

    void display() {
        cout << "Book ID: " << bookId << endl;
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }

    // Destructor
    ~Book() {
        cout << "Destructor called for Book "
             << bookId << endl;
    }
};

int main() {

    int n;

    cout << "Enter number of books: ";
    cin >> n;

    Book *books = new Book[n];

    for (int i = 0; i < n; i++) {
        cout << "\nBook " << i + 1 << endl;
        books[i].accept();
    }

    cout << "\nBook Details:\n";

    for (int i = 0; i < n; i++) {
        cout << "\nBook " << i + 1 << endl;
        books[i].display();
    }

    delete[] books;

    return 0;
}