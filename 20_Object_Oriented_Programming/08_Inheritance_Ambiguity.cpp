#include <iostream>
using namespace std;

//? Inheritance Ambiguity
//* A, B -> C
//* If A and B have a function with the same name; then c.func() will access which function
//* So, Scope Resolution Operator (::) is used for this
// c.A::func();

class A {
    public:
    void func() {
        cout << "I am A" << endl;
    }
};

class B {
    public:
    void func() {
        cout << "I am B" << endl;
    }
};

class C: public A, public B {

};

int main()
{
    C obj;
    obj.A::func();
    obj.B::func();
    
    return 0;
}