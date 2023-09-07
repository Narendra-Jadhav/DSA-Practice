#include <iostream>
using namespace std;

int main()
{
    int i = 5;
    int* p = &i;
    int** p2 = &p; //* Double Pointer

    cout << "Value of p: " << *p2 << endl;
    cout << "Address of p: " << p2 << endl;

    cout << endl;

    //* 3 ways to print value of i, i.e. 5
    cout << i << endl;
    cout << *p << endl;
    cout << **p2 << endl;

    cout << endl;

    //* 3 ways to print address of i
    cout << &i << endl;
    cout << p << endl;
    cout << *p2 << endl;
    
    return 0;
}