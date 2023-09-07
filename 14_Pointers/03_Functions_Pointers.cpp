#include <iostream>
using namespace std;

void print(int *p) {
    cout << *p << endl;
}

void update(int *p) {
    // p = p + 1; // this will only change the address of p here and not there
    *p = *p + 1; // but we can change the value of *p
}

int main()
{
    int value = 5;
    int *p = &value;

    print(p);
    update(p);
    print(p);
    print(&value); //* sending p and &value is same as both are the address of value

    //* to a function we can pass a specific part of array
    //eg.
    //? getSum(arr+3, 3); => here the array is sent from index 3 onwards 
    
    return 0;
}