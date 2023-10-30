//Write a C++ program to demonstrate Runtime polymorphism codec with virtual keyword.
#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() {
        cout << "Display from Base class" << endl;
    }
};

class Derived : public Base {
public:
    void display() override {
        cout << "Display from Derived class" << endl;
    }
};

int main() {
    Base b;
    Derived d;

    b.display(); 
    d.display(); 

    Base* ptr = &d; 
    ptr->display();

    return 0;
}

