//Write a C++ program to demonstrate use of this pointer.
#include <iostream>
using namespace std;

class MyClass {
private:
    int num;

public:
    void setNum(int num) {
       
        this->num = num;
    }

    void display() {
        cout << "Value of num: " << this->num << endl;
    }

      MyClass& increment() {
        this->num++;
        return *this;
    }
};

int main() {
    MyClass obj;

    obj.setNum(5);
    obj.display(); 

    obj.increment().increment().display(); 

    return 0;
}

