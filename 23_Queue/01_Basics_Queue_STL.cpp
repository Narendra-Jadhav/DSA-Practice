#include <iostream>
#include <queue>
using namespace std;

//* QUEUE -> FIFO (First In First Out)

int main()
{
    queue<int> q;

    q.push(5);
    q.push(12);
    q.push(9);

    cout << "Size of Queue is: " << q.size() << endl;

    cout << "Front of queue: " << q.front() << endl;
    cout << "Back of queue: " << q.back() << endl;

    q.push(15);
    q.pop();

    cout << "Front of queue: " << q.front() << endl;
    cout << "Back of queue: " << q.back() << endl;

    if (q.empty()) {
        cout << "Queue is empty" << endl;
    }
    else {
        cout << "Queue is not empty" << endl;
    }
    
    return 0;
}