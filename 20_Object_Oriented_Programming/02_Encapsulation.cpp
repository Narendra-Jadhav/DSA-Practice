#include <iostream>
using namespace std;

//? Encapsulation 
//* -> Wrapping up data members and functions
//* -> Class where data members and functions can be made 'Private' for Data hiding

//* A class can be made read-only by only including getter

class Student {

    private:
        string name;
        int age;
        int height;

    public:
        int getAge() {
            return this -> age;
        }

};

int main()
{
    Student first;

    cout << "Encapsulation" << endl;
    
    return 0;
}