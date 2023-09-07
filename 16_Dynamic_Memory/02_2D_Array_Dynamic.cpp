#include <iostream>
using namespace std;

int main()
{
    //* int* arr = new int[n]; -> Dynamic 1D Array
    /*
    1D - multiple int
    2D - multiple arrays -> in Heap, multiple int*

    Hence, multiple int* will create 2D array. For each pointer in this it will point to another array
    */

    //? 2D Array Creation
    int row, column;
    cin >> row >> column;

    //* **arr for pointer dynamic array
    int **arr = new int *[row];

    //* Using for loop forming dynamic array of length column for each pointer
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[column];
    }

    //? Taking input for array
    for(int i=0; i<row; i++) {
        for (int j=0; j<column; j++) {
            cin >> arr[i][j];
        }
    }
    cout << endl;

    //? Printing output
    for(int i=0; i<row; i++) {
        for (int j=0; j<column; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    //? Releasing Memory
    //* Firstly releasing all the arrays using for loop
    for (int i=0; i<row; i++) {
        delete [] arr[i];
    }

    //* Secondly releasing the pointers array
    delete []arr;

    return 0;
}