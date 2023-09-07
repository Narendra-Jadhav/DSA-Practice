#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int> &s, int x) {
    // base case
    if (s.empty()) {
        s.push(x);
        return;
    }

    int num = s.top();
    s.pop();

    // recursive case
    solve(s, x);

    s.push(num);
}

stack<int> pushAtBottom(stack<int>& myStack, int x) {
    solve(myStack, x);
    return myStack;
}

int main()
{
    stack<int> s;
    s.push(7);
    s.push(1);
    s.push(4);
    s.push(5);

    stack<int> ans = pushAtBottom(s, 9);

    while(!ans.empty()) {
        cout << ans.top() << " ";
        ans.pop();
    }
    
    return 0;
}