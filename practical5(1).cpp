//Write a C++ program to demonstrate use of Single Inheritance.

#include <iostream>
using namespace std;


class Shape {
public:
    void display() {
        cout << "This is a shape." << endl;
    }
};


class Rectangle : public Shape {
public:
    void display() {
        cout << "This is a rectangle." << endl;
    }

    void draw() {
        cout << "Drawing a rectangle." << endl;
    }
};

int main() {
    
	  Rectangle rect;

      rect.display(); 
    rect.draw();    
	
	  return 0;
}

