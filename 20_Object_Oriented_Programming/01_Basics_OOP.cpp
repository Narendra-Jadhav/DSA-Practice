#include <iostream>
#include "01_Test_Class.cpp"
//* We can make another cpp file for the Class and include it here
using namespace std;

class Hero {
    //* properties
    private:
    int health = 70;
    
    public:
    char level;
    //* Static data member -> Data member taht belongs to the class and not to a specific object
    // To access static data member there is not need of an object
    static int timeToComplete;

    //* Default Constructor -> Without any parameters
    Hero() {
        cout << "Default Constructor Called" << endl;
    }

    //* Parameterised Constructor
    Hero(int health) {
        cout << "Parameterised Constructor Called" << endl;

        this -> health = health;
        //* this is the pointer that stores the address of the current object.
        //* So, current object ke variable mein ye health daal do.
        cout << "Address stored in this: " << this << endl;
    }

    //? NOTE: When we make some Parameterised constructor; then system doesn't assign any Default Constructor

    //* Copy Constructor
    Hero(Hero& temp) {
        // pass by reference of temp is required, else it will get stuck in infinite loop of temp and Hero
        cout << "Copy Constructor Called" << endl;

        this -> health = temp.health;
        this -> level = temp.level;
    }

    Hero(int health, char level) {
        cout << "Parameterised Constructor with two parameters Called" << endl;

        this -> health = health;
        this -> level = level;
    }

    void print() {
        cout << "Health: " << this -> health << endl; // if we don't write this->, this also it is okay
        cout << "Level: " << this -> level << endl;
    }

    //* Getter and Setter (Public Functions in the class through which we can access private variables)
    int getHealth() {
        return health;
    }

    char getLevel() {
        return level;
    }

    void setHealth(int h) {
        health = h;
    }

    void setLevel(char l) {
        level = l;
    }

    //* Static function -> can only access static members
    static int getTimetoComplete() {
        return timeToComplete + 10;
    }

    //* Destructor -> called automatically for static objects
    ~Hero() {
        cout << "Destructor Called" << endl;
    }
};

//* Initializing Static data member
int Hero :: timeToComplete = 5;
//* :: -> Scope Resolution Operator

int main()
{
    Test t1;
    cout << t1.test1 << endl;
    //------------------------

    //* Static Allocation
    Hero h1;

    // h1.health = 70;
    // h1.level = 'A';

    //* Setter
    h1.setHealth(80);
    h1.setLevel('B');

    // cout << "Health: " << h1.health << endl;
    // cout << "Level: " << h1.level << endl;

    //* Getter
    cout << "Health: " << h1.getHealth() << endl;
    cout << "Level: " << h1.getLevel() << endl;
    
    //-----------------------------------------
    //* Dynamic Allocation
    Hero *b = new Hero; // or Hero *b = new Hero();

    (*b).setHealth(60);
    b -> setLevel('C'); //! We can use 'Arrow ->' to access variables/functions in dynamic allocation; in place of * and .

    b -> print();

    //* Parameterised Contructor object
    Hero a1(66);
    cout << "Address of a1: " << &a1 << endl;
    cout << "Health: " << a1.getHealth() << endl;

    Hero a2(77, 'E');
    a2.print();

    //* Copy Constructor -> Same value members as a2
    Hero a3(a2);
    // Hero a3 = a2;
    // Both methods are correct for calling Copy Constructor
    a3.print();

    //* Manually calling Destructor for Dynamic Object
    delete b;

    //* Static data member access
    cout << "Time to complete: " << Hero :: timeToComplete << endl; //* accessing static member with class directly
    cout << "Time to complete: " << a1.timeToComplete << endl; 
    //* It will also work, but it is not recommended to access static member with object

    //* Static function access
    cout << Hero :: getTimetoComplete() << endl;

    return 0;
}