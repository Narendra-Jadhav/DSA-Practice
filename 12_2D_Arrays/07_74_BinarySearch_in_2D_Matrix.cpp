#include <iostream>
#include <vector>
using namespace std;

//* BINARY SEARCH in 2D Matrix
//? Time Complexity: O(log n) => O(log row*col)

//! Matrix is row wise sorted and next row has greater elements than the previous row
bool searchMatrix(vector<vector<int>> &matrix, int target) {

    int row = matrix.size();
    int col = matrix[0].size();

    int start = 0;
    // total elements  - 1
    int end = row*col - 1;

    int mid = start + (end - start) / 2;

    while(start <= end) {
        
        //* finding the element at mid in the 2D matrix
        //* mid / col -> gives the Row index
        //* mid % col -> gives the Col Index
        int element = matrix[mid/col][mid%col];

        if (element == target) {
            return 1;
        }
        if (element < target) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return 0;
}

int main()
{
    
    
    return 0;
}