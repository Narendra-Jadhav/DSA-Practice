#include <bits/stdc++.h>
using namespace std;

//* Rotate Image by 90 degrees
// the rows in decreasing order have the columns at the same location, in the same row of the resultant vector

void rotate(vector<vector<int>>& matrix) {
    vector<vector<int>> ans;

    int row = matrix.size();
    int col = matrix[0].size();

    for (int i=0; i<col; i++) {
        vector<int> temp;
        for (int j=row-1; j>=0; j--) {
            temp.push_back(matrix[j][i]);
        }
        ans.push_back(temp);
    }
    matrix = ans;
}

//* Method 2 - BEST
//* 1) Transpose the matrix
//* 2) Swap the columns

void rotate1(vector<vector<int>>& matrix) {
    int row = matrix.size();
    for(int i=0;i<row; i++){
        for(int j=0; j<=i;j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    for(int i=0;i<row;i++){
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main()
{
    vector<vector<int>> vec = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    rotate(vec);

    for (auto i: vec) {
        for (auto j: i) {
            cout << j << "\t";
        }
        cout << endl;
    }
    
    return 0;
}