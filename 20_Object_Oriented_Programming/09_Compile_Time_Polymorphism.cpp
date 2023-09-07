#include <iostream>
using namespace std;

//? Compile Time Polymorphism

//* 1) Function Overloading -> same function name with different number or type of arguments
class A {
    public:
    void func() {
        cout << "Hello" << endl;
    }

    void func(string name) {
        cout << "Hello " << name << endl;
    }
};

//* 2) Operator Overloading
class B {
    public:
    int a;
    int b;

    public:
    int add() {
        return a+b;
    }

    void operator+ (B &obj) {
        // int value1 = this -> a;
        // int value2 = obj.a;
        // cout << "output: " << value2 - value1 << endl;
        cout << "Hello from B" << endl;
    }

    void operator() () {
        cout << "I am bracket" << this->a << endl;
    }
};

int main()
{
    A obj1;
    obj1.func();
    obj1.func("Sam");

    //------------

    B b1, b2;
    b1.a = 4;
    b1.a = 7;

    b1 + b2; // on doing +, something else is also done using overloading

    b1();
    
    return 0;
}