//Write a C++ program to demonstrate use of Multilevel Inheritance.
#include <iostream>
using namespace std;


class Animal {
public:
    void eat() {
        cout << "Eating..." << endl;
    }
};


class Dog : public Animal {
public:
    void bark() {
        cout << "Barking..." << endl;
    }
};


class GermanShepherd : public Dog {
public:
    void display() {
        cout << "I am a German Shepherd!" << endl;
    }
};

int main() {
    GermanShepherd max;
    
    max.eat();   
    max.bark();  
	 max.display();
    
    return 0;
}

