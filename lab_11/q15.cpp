#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows" << endl;
    }
};

class Cow : public Animal {
public:
    void sound() override {
        cout << "Cow moos" << endl;
    }
};

int main() {
    Dog d;
    Cat c;
    Cow w;

    Animal* animals[3] = {&d, &c, &w};

    for (int i = 0; i < 3; i++) {
        animals[i]->sound();
    }

    return 0;
}