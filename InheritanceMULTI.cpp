#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Animal is eating..." << endl;
    }
};

// Derived class from Animal
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking..." << endl;
    }
};

// Derived class from Dog
class Bulldog : public Dog {
public:
    void guard() {
        cout << "Bulldog is guarding..." << endl;
    }
};

int main() {
    // Create an object of Bulldog class
    Bulldog bulldog;

    // Call methods from different levels of inheritance
    bulldog.eat();   // Method from Animal class
    bulldog.bark();  // Method from Dog class
    bulldog.guard(); // Method from Bulldog class

    return 0;
}

