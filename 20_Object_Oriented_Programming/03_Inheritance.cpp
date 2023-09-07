#include <iostream>
using namespace std;

//? Inheritance
//* -> Inheriting the properties of other class
//* -> Child/sub clas inherits the properties of Parent/super class
//* Syntax => class Child : access_modifier Parent {};

//* Protected -> Accessible inside own class -> And only child/derived class can access

/*
* Modes of Inheritance
                            *Child Class
*Parent class    Public          Protected       Private

Public ->       Public          Protected       Private

Protected ->    Protected       Protected       Private

Private ->      Not Accessible  Not Accessible  Not Accessible
*/

//* Parent Class
class Human {

    public:
        int height;
        int weight;
        int age;
    
    public:
        int getAge() {
            return this -> age;
        }

        void setWeight(int w) {
            this -> weight = w;
        }
};

//* Child Class
class Male: public Human {
    public:
        string color;
    
    void sleep() {
        cout << "Male sleeping" << endl;
    }
};

int main()
{
    
    
    return 0;
}