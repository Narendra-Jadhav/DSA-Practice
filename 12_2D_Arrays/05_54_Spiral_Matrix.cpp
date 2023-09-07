#include <iostream>
#include <vector>
using namespace std;

//! IMP !
//* Spiral Print
/*
1 2 3
4 5 6
7 8 9

Spiral Print -> 1 2 3 6 9 8 7 4 5
*/

vector<int> spiralPrint(vector<vector<int>> &matrix) {

    vector<int> ans;
        //* Number of Rows and Cols of a vector
        int row = matrix.size();
        int col = matrix[0].size();
        
        // index initialization
        int startingRow = 0;
        int startingCol = 0;
        int endingRow = row - 1;
        int endingCol = col - 1;

        while(startingRow <= endingRow && startingCol <= endingCol) {

            //* print starting row
            for (int index=startingCol; index <= endingCol; index++) {
                ans.push_back(matrix[startingRow][index]);
            }
            startingRow++;

            //* print ending col
            for (int index=startingRow; index <= endingRow; index++) {
                ans.push_back(matrix[index][endingCol]);
            }
            endingCol--;

            if (startingRow <= endingRow) {
                //* print ending row
                for (int index=endingCol; index >= startingCol; index--) {
                    ans.push_back(matrix[endingRow][index]);
                }
                endingRow--;
            }

            if (startingCol <= endingCol) {
                //* print starting col
                for (int index=endingRow; index >= startingRow; index--) {
                    ans.push_back(matrix[index][startingCol]);
                }
                startingCol++;
            }
        }
        return ans;
}

int main()
{
    vector<vector<int>> vec = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    vector<int> ans = spiralPrint(vec);

    for (auto i: ans) {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}