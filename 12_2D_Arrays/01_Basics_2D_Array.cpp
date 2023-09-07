#include <iostream>
using namespace std;

//* search an element in 2d array
//? NOTE: While passing 2D array as parameter we always need to specify the column size. Row size may not be needed but column size is must
bool isPresent(int arr[][4], int target, int row, int col) {
    for (int row=0; row<3; row++) {
        for (int col=0; col<4; col++) {
            if (arr[row][col] == target) {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    //* create 2D array
    int arr[3][4];
    int arr2[3][4] = {{1, 11, 111, 1111}, {2, 22, 222, 2222}, {3, 33, 333, 3333}};

    // taking input
    for (int i=0; i<3; i++) {
        for (int j=0; j<4; j++) {
            cin >> arr[i][j];
        }
    }

    cout << endl << "2D Array: " << endl;
    for (int i=0; i<3; i++) {
        for (int j=0; j<4; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    cout << endl;

    //* Search an element in 2D array
    int target;
    cin >> target;

    if (isPresent(arr, target, 3, 4)) {
        cout << "Element is present in the array" << endl;
    }
    else {
        cout << "Element is Not present" << endl;
    }
    
    return 0;
}