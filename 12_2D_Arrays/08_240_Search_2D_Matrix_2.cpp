#include <iostream>
#include <vector>
using namespace std;

//! Matrix is Row-wise and Column-wise sorted. The next row can have smaller element than the previous row

bool searchMatrix(vector<vector<int>> &matrix, int target) {

    int row = matrix.size();
    int col = matrix[0].size();

    //* We will start from the Top-Right element
    int rowIndex = 0;
    int colIndex = col - 1;

    while(rowIndex < row && colIndex >= 0) {

        int topRight = matrix[rowIndex][colIndex];

        if (topRight == target) {
            return 1;
        }
        if (topRight < target) {
            rowIndex++;
        }
        else {
            colIndex--;
        }
    }
    return 0;
}

int main()
{
    
    
    return 0;
}