#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    cout << endl << "Printed Array: ";

    for (int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

//! This function will give error / warning. We cannot find size of array inside function by passing the array
/*
void sizeOfArray(int arr[]) {
    cout << endl << "Size of array: ";

    int size = sizeof(arr) / sizeof(arr[0]);

    cout << size << endl;
}
*/

int main()
{
    //* Array Declaration -> int arr[5];
    //* Array Initialization
    int arr[5] = {1, 2, 3, 4, 5};

    cout << arr << endl << arr[0] << endl << &arr[0] << endl;
    //* arr and &arr[0] are same because arr stores the address of the first element

    int brr[10]; // all the 10 locations will have garbage value
    cout << brr[3] << endl;

    int crr[10] = {5}; // first index will have 5, and all other 9 locations will have 0
    cout << crr[0] << endl << crr[5] << endl;

    //* So, if we want all the indexes to take 0 value -> int arr[10] = {0}; or int arr[10] = {};

    int drr[10];
    fill_n(drr, 10, 3); //* To initialize all the elements of the array with some specific number

    // for (int i=0; i<10; i++) {
    //     cout << drr[i] << " ";
    // }
    printArray(drr, 10);

    cout << endl;

    cout << drr[20] << endl; // error can come and also not; depends on compiler

    //? Size of Array
    //* NOTE: Size of array is the capacity of the array and not the number of elements in the array
    int sizeArr = sizeof(arr) / sizeof(arr[0]);

    cout << "Size of arr: " << sizeArr << endl;

    //* --------------------------------------

    // int s;
    // cin >> s;

    // int s_arr[s];

    // for (int i=0; i<s; i++) {
    //     cin >> s_arr[i];
    // }

    // for (int i=0; i<s; i++) {
    //     cout << s_arr[i] << " ";
    // }

    return 0;
}