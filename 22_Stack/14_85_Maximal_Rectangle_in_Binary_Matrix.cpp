#include <bits/stdc++.h>
using namespace std;

//* Maximal Rectangle -> 
//* Given a rows x cols binary matrix filled with 0's and 1's, find the largest rectangle containing only 1's and return its area.

//? Compute max_area for first row
//? for every remaining rows add elements in above row & compute area (largest rectangular area of histogram)

vector<int> nextSmallerElement(vector<char> arr, int n) {
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);

    for(int i=n-1; i>=0; i--) {
        int curr = int(arr[i] - '0');
        while(s.top() != -1 && int(arr[s.top()] - '0') >= curr) {
            s.pop();
        }
        // ans is stack ka top
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}

vector<int> prevSmallerElement(vector<char> arr, int n) {
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);

    for(int i=0; i<n; i++) {
        int curr = int(arr[i] - '0');
        while(s.top() != -1 && int(arr[s.top()] - '0') >= curr) {
            s.pop();
        }
        // ans is stack ka top
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}

int largestRectangleArea(vector<char> &heights) {
    int n = heights.size();

    vector<int> next(n);
    next = nextSmallerElement(heights, n);

    vector<int> prev(n);
    prev = prevSmallerElement(heights, n);

    int area = INT_MIN;

    for(int i=0; i<n; i++) {
        int l = int(heights[i] - '0');

        if (next[i] == -1) {
            next[i] = n;
        }
        int b = next[i] - prev[i] - 1;

        int newArea = l * b;
        area = max(area, newArea);
    }
    return area;
}

int maximalRectangle(vector<vector<char>>& matrix) {
    int row = matrix.size();
    int col = matrix[0].size();

    // compute area for first row
    int area = largestRectangleArea(matrix[0]);

    for(int i=1; i<row; i++) {
        for(int j=0; i<col; j++) {
            
            // update row by adding previous row values
            if (matrix[i][j] != '0') {
                matrix[i][j] = matrix[i][j] + matrix[i-1][j];
            }
            else {
                matrix[i][j] = '0';
            }
        }
        // entire row is updated now
        area = max(area, largestRectangleArea(matrix[i]));
    }
    return area;
}

int main()
{
    
    
    return 0;
}