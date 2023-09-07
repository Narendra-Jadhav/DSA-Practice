#include <iostream>
using namespace std;

int main()
{
    int arr[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

    int nRows = 4, mCols = 4;

    for (int col=0; col< mCols; col++) {
        // Odd Index (Bottom -> Top)
        if (col & 1) {
            for (int row= nRows - 1; row >= 0; row--) {
                cout << arr[row][col] << " ";
            }
        }
        // Even Index (Top -> Bottom)
        else {
            for (int row=0; row<nRows; row++) {
                cout << arr[row][col] << " ";
            }
        }
        cout << endl;
    }
    
    return 0;
}