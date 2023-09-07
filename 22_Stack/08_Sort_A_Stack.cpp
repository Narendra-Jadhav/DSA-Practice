#include <iostream>
#include <stack>
using namespace std;

void sortedInsert(stack<int> &s, int x) {
    // base case
    if (s.empty() || (!s.empty() && s.top() <= x)) {
        s.push(x);
        return;
    }

    int num = s.top();
    s.pop();

    sortedInsert(s, x);

    s.push(num);
}

void solve(stack<int> &s) {
    // base case
    if (s.empty()) {
        return;
    }

    int num = s.top();
    s.pop();

    solve(s);

    sortedInsert(s, num);
}

stack<int> sortStack(stack<int> s) {
    solve(s);
    return s;
}

int main()
{
    stack<int> s;
    s.push(5);
    s.push(-2);
    s.push(9);
    s.push(-7);
    s.push(3);

    stack<int> ans = sortStack(s);

    while(!ans.empty()) {
        cout << ans.top() << " ";
        ans.pop();
    }
    
    return 0;
}