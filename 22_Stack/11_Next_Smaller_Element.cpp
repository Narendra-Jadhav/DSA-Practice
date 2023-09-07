#include <iostream>
#include <stack>
#include <vector>
using namespace std;

//* Find First smaller element in the window after the curr element
//? Method1 -> Brute force => check for smaller element in the window of each element

//? Method2 -> Using stack -> stack will have -1 at start. Starting from right of array and checking if stack has smaller than it
vector<int> nextSmallerElement(vector<int> &arr, int n) {
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);

    for(int i=n-1; i>=0; i--) {
        int curr = arr[i];
        while(s.top() >= curr) {
            s.pop();
        }
        ans[i] = s.top();
        s.push(curr);
    }
    return ans;
}

int main()
{
    vector<int> arr = {2, 1, 4, 3};
    vector<int> ans = nextSmallerElement(arr, arr.size());

    for(auto x: ans) {
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}