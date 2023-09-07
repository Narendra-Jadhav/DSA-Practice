#include <iostream>
using namespace std;

//? Multiple Inheritance
//* A, B -> C
// C inherits the properties of A and B both

class Animal {
    public:
    int age;
    int weight;

    public:
    void bark() {
        cout << "Barking" << endl;
    }
};

class Human {
    public:
    string color;

    public:
    void speak() {
        cout << "Speaking" << endl;
    }
};

class Hybrid: public Animal, public Human {

};

int main()
{
    Hybrid h1;
    h1.speak();
    h1.bark();
    
    return 0;
}