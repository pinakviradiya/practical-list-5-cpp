//Write a C++ program to demonstrate order of constructor calls in Multiple Inheritance.
#include <iostream>
using namespace std;


class Base1 {
public:
    Base1() {
        cout<< "Viradiya pinak";
    	 cout<< "220130318014";
        cout << "Base1 Constructor called" << endl;
    }
};


class Base2 {
public:
    Base2() {
        cout << "Base2 Constructor called" << endl;
    }
};


class Derived : public Base1, public Base2 {
public:
    Derived() {
        cout << "Derived Constructor called" << endl;
    }
};

int main() {
    Derived d;

    return 0;
}

