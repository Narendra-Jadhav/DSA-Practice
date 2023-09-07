#include <iostream>
#include <vector>
#include <stack>
using namespace std;

//* Celebrity Problem -> everyone in the party knows celebritt; celebrity knows nobody
//* matrix of people is given. 0 means don't know, 1 means know. Ignore diagonal as everyone knows himself

int celebrity(vector<vector<int>> &M, int n) {
    stack<int> s;

    // step1 -> push all elements in stack
    for (int i=0; i<n; i++) {
        s.push(i);
    }

    // step2 -> get two elements and compare them
    while(s.size() > 1) {
        int a = s.top();
        s.pop();

        int b = s.top();
        s.pop();

        // if a knows b
        if (M[a][b] == 1) {
            s.push(b);
        }
        else {
            s.push(a);
        }
    }
    int candidate = s.top();

    // step3 -> single element in stack is potential celebrity, so verify it
    int zeroCount = 0;
    for(int i=0; i<n; i++) {
        if (M[candidate][i] == 0) {
            zeroCount++;
        }
    }
    // all zeros
    if (zeroCount != n) {
        return -1;
    }

    int oneCount = 0;
    for(int i=0; i<n; i++) {
        if (M[i][candidate] == 1) {
            oneCount++;
        }
    }
    // n-1 ones
    if (oneCount != n-1) {
        return -1;
    }

    return candidate;
}

int main()
{
    
    
    return 0;
}