#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &s, int x) {
    // base case
    if (s.empty()) {
        s.push(x);
        return;
    }

    int num = s.top();
    s.pop();

    // recursive case
    insertAtBottom(s, x);

    s.push(num);
}

void solve(stack<int> &s) {
    // base case
    if (s.empty()) {
        return;
    }

    // first one done by me
    int num = s.top();
    s.pop();

    // recursive call
    solve(s);

    insertAtBottom(s, num);
}

stack<int> reverseStack(stack<int> s) {
    solve(s);
    return s;
}

int main()
{
    stack<int> s;
    s.push(7);
    s.push(1);
    s.push(4);
    s.push(5);

    stack<int> ans = reverseStack(s);

    while(!ans.empty()) {
        cout << ans.top() << " ";
        ans.pop();
    }
    
    return 0;
}