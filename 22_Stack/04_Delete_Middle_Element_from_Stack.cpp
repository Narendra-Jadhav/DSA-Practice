#include <iostream>
#include <stack>
using namespace std;

//* Delete Middle element from Stack

void solve(stack<int>&inputStack, int count, int size) {
    //base case
    if (count == size/2) {
        inputStack.pop();
        return;
    }

    // saving the top element before popping so that to push after returning after deleting middle element
    int num = inputStack.top();
    inputStack.pop();

    // Recursive Call
    solve(inputStack, count+1, size);

    inputStack.push(num);
}

void deleteMiddle(stack<int>&inputStack, int N) {
    int count = 0;
    solve(inputStack, count, N);
}

int main()
{
    stack<int> s;
    s.push(5);
    s.push(3);
    s.push(9);
    s.push(2);
    s.push(4);

    deleteMiddle(s, s.size());
    stack<int> ans = s;

    while(!ans.empty()) {
        cout << ans.top() << " ";
        ans.pop();
    }
    
    return 0;
}