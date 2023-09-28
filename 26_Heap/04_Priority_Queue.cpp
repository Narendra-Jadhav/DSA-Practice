#include <iostream>
#include <queue>
using namespace std;

//* Priority Queue -> It is a Max Heap

int main()
{
    cout << endl << "* Max Heap *" << endl;

    //* Max Heap
    priority_queue<int> pq;

    pq.push(4);
    pq.push(2);
    pq.push(5);
    pq.push(3);

    cout << "Size of PQ: " << pq.size() << endl;

    cout << "Element at top: " << pq.top() << endl;

    pq.pop();

    cout << "Size of PQ: " << pq.size() << endl;

    cout << "Element at top: " << pq.top() << endl;

    if (pq.empty()) {
        cout << "PQ is empty" << endl;
    }
    else {
        cout << "PQ is not empty" << endl;
    }

    //?------------------------------------------------------
    cout << endl << "* Min Heap *" << endl;

    //* Min Heap
    priority_queue<int, vector<int>, greater<int>> minheap;

    minheap.push(4);
    minheap.push(2);
    minheap.push(5);
    minheap.push(3);

    cout << "Size of MinHeap: " << minheap.size() << endl;

    cout << "Element at top: " << minheap.top() << endl;

    minheap.pop();

    cout << "Size of MinHeap: " << minheap.size() << endl;

    cout << "Element at top: " << minheap.top() << endl;

    if (minheap.empty()) {
        cout << "MinHeap is empty" << endl;
    }
    else {
        cout << "MinHeap is not empty" << endl;
    }
    
    return 0;
}