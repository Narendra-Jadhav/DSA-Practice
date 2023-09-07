#include <iostream>
#include <stack>
#include <vector>
using namespace std;

//* Largest Rectangular Area in a Histogram
//? Method1 -> Brute force -> for each pillar checking if can extend to left or right. Extending it to maximum and storing that.
//? The maximum area obtained will be the answer => T.C = O(n^2)

//? Method2 -> Using Stack
//? For each element finding the next and previous smallest element so that till that it can be extended
//? width = n - p - 1

vector<int> nextSmallerElement(vector<int> arr, int n) {
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);

    for(int i=n-1; i>=0; i--) {
        int curr = arr[i];
        while(s.top() != -1 && arr[s.top()] >= curr) {
            s.pop();
        }
        // ans is stack ka top
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}

vector<int> prevSmallerElement(vector<int> arr, int n) {
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);

    for(int i=0; i<n; i++) {
        int curr = arr[i];
        while(s.top() != -1 && arr[s.top()] >= curr) {
            s.pop();
        }
        // ans is stack ka top
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}

int largestRectangleArea(vector<int> &heights) {
    int n = heights.size();

    vector<int> next(n);
    next = nextSmallerElement(heights, n);

    vector<int> prev(n);
    prev = prevSmallerElement(heights, n);

    int area = INT8_MIN;

    for(int i=0; i<n; i++) {
        int l = heights[i];

        if (next[i] == -1) {
            next[i] = n;
        }
        int b = next[i] - prev[i] - 1;

        int newArea = l * b;
        area = max(area, newArea);
    }
    return area;
}

int main()
{
    vector<int> arr = {2,1,5,6,2,3};
    int area = largestRectangleArea(arr);
    cout << area << endl;
    
    return 0;
}