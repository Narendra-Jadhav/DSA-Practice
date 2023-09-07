#include <iostream>
#include <queue>
using namespace std;

//* PRIORITY QUEUE
//? By default it is max-heap -> greatest element at the top
//? min-heap -> smallest element at the top

int main()
{
    //* max-heap
    priority_queue<int> maxi;

    //* min-heap
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    cout << "Maxi size: " << maxi.size() << endl;
    int n = maxi.size();

    // for printing the priority_queue, printing the top element and popping it out
    for (int i=0; i<n; i++) {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;

    mini.push(5);
    mini.push(1);
    mini.push(0);
    mini.push(4);
    mini.push(3);

    int m = mini.size();
    for (int i=0; i<m; i++) {
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;

    cout << "Is mini empty: " << mini.empty() << endl;
    // it will be empty as we have popped all the elements in the for loop while printing it
    
    return 0;
}