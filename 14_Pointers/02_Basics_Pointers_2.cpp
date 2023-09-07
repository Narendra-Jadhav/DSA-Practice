#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {8, 2, 3, 4, 5};

    int *ptr = arr;
    cout << arr << " " << *ptr << endl;

    //* arr and &arr[10] will be the address of the first element of array
    cout << "arr: " << arr << ", &arr[0]: " << &arr[0] << endl;

    //* arr[0] and *arr will be the value of the first element of the array
    cout << "arr[0]: " << arr[0] << ", *arr: " << *arr << endl;
    
    cout << *arr + 1 << endl; //* simply first number + 1
    cout << arr + 1 << endl; //* address of second element
    cout << *(arr + 1) << endl; //* value of second element

    //? NOTE: arr[i] = *(arr + i)
    //? or i[arr] = *(i + arr)

    int i = 3;
    // we can access the array like this also
    cout << "i[arr]: " << i[arr] << endl;

    //* Sizes
    int temp[10] = {1, 2, 3};
    int *tempPtr = &temp[0];

    cout << sizeof(temp) << endl; // size of whole array
    cout << sizeof(*temp) << endl; // size of first element
    cout << sizeof(&temp) << endl; // size of address of first element

    cout << sizeof(tempPtr) << endl; // size of pointer
    cout << sizeof(*tempPtr) << endl; // size of first element
    cout << sizeof(&tempPtr) << endl; // size of address of first element

    //* Address
    cout << &temp[0] << endl; // all three will be same -> address of first element
    cout << &temp << endl;
    cout << temp << endl;

    cout << tempPtr << endl; // address of first element
    cout << *tempPtr << endl; // value of first element
    cout << &tempPtr << endl; // address of pointer

    return 0;
}