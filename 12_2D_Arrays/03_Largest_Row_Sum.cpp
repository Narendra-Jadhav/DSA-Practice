#include <iostream>
using namespace std;

int largestRowSum(int arr[][4], int row, int col) {
    int maxi = INT32_MIN;
    int rowIndex = -1;

    for (int row=0; row<3; row++) {
        int sum = 0;
        for(int col=0; col<4; col++) {
            sum += arr[row][col];
        }
        if (sum > maxi) {
            maxi = sum;
            rowIndex = row;
        }
    }
    cout << "The maximum sum is: " << maxi << endl;
    return rowIndex;
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

    cout << largestRowSum(arr, 3, 4) << endl;
    
    return 0;
}