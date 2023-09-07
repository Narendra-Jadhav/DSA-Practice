#include <iostream>
using namespace std;

//? Run Time Polymorphism -> Method/Function Overriding
//* -> To redefine the Parent class method/function in the child class based on its requirement

//* -> Possible through Inheritance only
//* -> Methods of parent and child class should have same name and arguments

class Animal {
    public:
    void speak() {
        cout << "Speaking" << endl;
    }
};

class Dog: public Animal {
    public:
    //* Method Overriding
    void speak() {
        cout << "Barking" << endl;
    }
};

int main()
{
    Animal a;
    a.speak();

    Dog d;
    d.speak();   
    
    return 0;
}