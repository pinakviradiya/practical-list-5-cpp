//Write a C++ program to demonstrate use of Multiple Inheritance.
#include <iostream>
using namespace std;

class Person {
public:
    string name;

    void setName(string n) {
        name = n;
    }
};


class Address {
public:
    string address;

    void setAddress(string a) {
        address = a;
    }
};


class Student : public Person, public Address {
public:
    void display() {
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
    }
};

int main() {
    Student s;

    s.setName("Pinak");
    s.setAddress("123 Main St, City");

    s.display();

    return 0;
}

