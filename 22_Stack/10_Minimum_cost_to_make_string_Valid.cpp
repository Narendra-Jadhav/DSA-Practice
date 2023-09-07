#include <iostream>
#include <stack>
using namespace std;

//* Minimum cost to make string valid
//? { } -> valid string; {}} -> invalid
//? string can be made valid by reversing the braces

//? 1) id string length is odd => Cannot be made valid as open != close braces
//? 2) remove valid part of string
//? 3) remaining part can be
// {{{{ -> ans = a/2
// or }}}} -> ans = b/2
// or }}{{ -> ans = (a+1)/2 + (b+1)/2
// a -> no. of {, b -> no. of }

int findMinimumCost(string str) {

    // odd condition
    if (str.length() % 2 == 1) {
        return -1;
    }

    stack<char> s;
    for(int i=0; i<str.length(); i++) {
        char ch = str[i];

        if (ch == '{') {
            s.push(ch);
        }
        else {
            // ch is closed brace
            if (!s.empty() && s.top() == '{') {
                s.pop();
            }
            else {
                s.push(ch);
            }
        }
    }
    // stack contains invalid expression
    int a=0, b=0;
    while(!s.empty()) {
        if (s.top() == '{') {
            a++;
        }
        else {
            b++;
        }
        s.pop();
    }

    int ans = (a+1)/2 + (b+1)/2;
    return ans;
}

int main()
{
    
    
    return 0;
}