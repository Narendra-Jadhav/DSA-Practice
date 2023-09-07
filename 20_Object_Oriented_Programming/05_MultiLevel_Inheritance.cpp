#include <iostream>
using namespace std;

//? MultiLevel Inheritance
//* A -> B -> C
// B inherits the properties of A; C inherits the properties of A and B both

class Animal {
    public:
    int age;
    int weight;

    public:
    void speak() {
        cout << "Speaking" << endl;
    }
};

class Dog: public Animal {

};

class GermanShephard: public Dog {

};

int main()
{
    Dog d1;
    d1.speak();

    GermanShephard g1;
    g1.speak();
    
    return 0;
}