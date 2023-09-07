#include <iostream>
using namespace std;

//? Hierarchical Inheritance
//* -> One class serves as Parent class for more than 1 class
//* A -> B, A -> C

class A {
    public:
    void f1() {
        cout << "Function 1" << endl;
    }
};

class B: public A {
    public:
    void f2() {
        cout << "Function 2" << endl;
    }
};

class C: public A {
    public:
    void f3() {
        cout << "Function 3" << endl;
    }
};

int main()
{
    A o1;
    o1.f1();

    B o2;
    o2.f1();
    o2.f2();

    C o3;
    o3.f1();
    o3.f3(); 
    
    return 0;
}