#include <iostream>
#include <stack>
using namespace std;

//* Redundant Brackets -> When a subexpression is surrounded by needless/useless brackets
//? ((a+b)) -> outer brackets are Redundant 
//? (a + (b * c)) -> No redundant brackets

bool findRedundantBrackets(string &s) {
    stack<char> st;

    for(int i=0; i<s.length(); i++) {
        char ch = s[i];

        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            st.push(ch);
        }
        else {
            // ch is ')' or lowercase letter

            // if ch is closing bracket there must be an operator in the stack before getting opening bracket
            if (ch == ')') {
                bool isRedundant = true;
                while(st.top() != '(') {
                    char top = st.top();
                    if (top == '+' || top == '-' || top == '*' || top == '/') {
                        isRedundant = false;
                    }
                    st.pop();
                }

                if (isRedundant == true) {
                    return true;
                }
                st.pop();
            }

        }
    }
    return false;
}

int main()
{
    
    
    return 0;
}