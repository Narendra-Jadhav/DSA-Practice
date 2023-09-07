#include <iostream>
using namespace std;

int main()
{
    int num = 5;

    int* ptr = &num;

    (*ptr)++; // * working as Dereference Operator to get the value pointer by ptr

    cout << num << endl; // num and *ptr are same
    cout << *ptr << endl;
    cout << ptr << endl; // on printing ptr we will get address of num
    cout << &num << endl; // ptr, &num and &(*ptr) are same
    cout << &(*ptr) << endl;
    
    cout << "Size of num: " << sizeof(num) << endl; //* as num is integer, its size is 4 bytes
    cout << "Size of ptr: " << sizeof(ptr) << endl; //* size of ptr is the size of address; it will be always same and will depend
    //* upon the compiler. Mostly it will be 4 or 8; for any type of data

    // ------

    int *p; //! This a bad practice. It will store some garbage value
    //? Always assign it to something

    int *q = 0; //* -> Null Pointer
    //cout << *q << endl; // This will give segmentation fault sometimes as q is not pointing to anything

    //* Copying a Pointer
    int z = 9;
    int *x = &z;
    int *y = x; // -> Copying a pointer

    cout << x << " " << y << endl; // both will be same
    cout << *x << " " << *y << endl;

    //* Pointer Arithmetic
    x++; // then it will go to another integer. Forward by 4 bytes
    cout << x << " " << *x << endl;

    return 0;
};