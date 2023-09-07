#include <iostream>
#include <stack>
using namespace std;

//* STACK -> LIFO/FILO

int main()
{
    //* Creation of Stack using STL
    stack<int> s;

    //* push operation
    s.push(3);
    s.push(5);
    s.push(2);

    //* pop
    s.pop();

    cout << "Top element: " << s.top() << endl;

    if (s.empty()) {
        cout << "Stack is empty" << endl;
    }
    else {
        cout << "Stack is Not empty" << endl;
    }

    //* size
    cout << "Size of stack: " << s.size() << endl;
    
    return 0;
}