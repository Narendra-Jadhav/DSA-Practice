#include <iostream>
using namespace std;

void printRowsSum(int arr[][4], int row, int col) {

    cout << "Row wise sum: " << endl;
    for (int row=0; row<3; row++) {
        int sum = 0;
        for(int col=0; col<4; col++) {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}

void printColSum(int arr[][4], int row, int col) {

    cout << "Col wise sum: " << endl;
    for (int col=0; col<4; col++) {
        int sum = 0;
        for(int row=0; row<3; row++) {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}

int main()
{
    int arr[3][4];

    // taking input
    cout << "Enter the elements: " << endl;
    for (int i=0; i<3; i++) {
        for (int j=0; j<4; j++) {
            cin >> arr[i][j];
        }
    }

    printRowsSum(arr, 3, 4);
    printColSum(arr, 3, 4);
    
    return 0;
}