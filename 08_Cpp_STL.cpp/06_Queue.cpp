#include <iostream>
#include <queue>
using namespace std;

//* QUEUE -> LILO / FIFO

int main()
{
    queue<string> q;

    q.push("Narendra");
    q.push("Jadhav");
    q.push("Hello");

    cout << "Size before pop: " << q.size() << endl;

    cout << "First Element: " << q.front() << endl;

    q.pop();

    cout << "First Element: " << q.front() << endl;

    cout << "size after pop: " << q.size() << endl;

    cout << "Empty or not: " << q.empty() << endl;
    
    return 0;
}