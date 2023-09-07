#include <iostream>
#include <stack>
using namespace std;

//* STACK -> LIFO / FILO

int main()
{
    stack<string> s;

    s.push("Narendra");
    s.push("Jadhav");
    s.push("Hello");

    cout << "Top Element: " << s.top() << endl;

    s.pop();

    cout << "Top Element: " << s.top() << endl;

    cout << "size of stack: " << s.size() << endl;

    cout << "Empty or not: " << s.empty() << endl;

    return 0;
}