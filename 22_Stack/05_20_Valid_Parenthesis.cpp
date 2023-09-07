#include <iostream>
#include <stack>
using namespace std;

//* Valid Parenthesis
//? -> pushing the opening brackets in stack
//? -> if we get closing bracket, its corresponding opening bracket should be at the top
//? -> at the end the stack should be empty

bool isValid(string s) {
    stack<char> sta;

    for(int i=0; i<s.size(); i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            sta.push(s[i]);
        }
        else if (sta.empty()) {
            return false;
        }

        if (s[i] == ')') {
            if (sta.top() == '(') {
                sta.pop();
            }
            else {
                return false;
            }
        }
        else if (s[i] == ']') {
            if (sta.top() == '[') {
                sta.pop();
            }
            else {
                return false;
            }
        }
        else if (s[i] == '}') {
            if (sta.top() == '{') {
                sta.pop();
            }
            else {
                return false;
            }
        }
        
    }

    if (sta.empty()) {
        return true;
    }
    else {
        return false;
    }
}

int main()
{
    string s = "()[]{}";
    if (isValid(s)) {
        cout << "Valid" << endl;
    }
    else {
        cout << "Invalid" << endl;
    }
    
    return 0;
}