#include <iostream>
#include <list>
using namespace std;

//* LIST -> it is formed from Doubly Linked List

int main()
{
    list<int> n(5, 100); // 5 elements with 100 value will be initialized

    cout << "Printing n -> " << endl;
    for (int i : n) {
        cout << i << " ";
    }
    cout << endl;

    list<int> l;

    l.push_back(1);
    l.push_front(5);

    for (int i : l) {
        cout << i << " ";
    }
    cout << endl;

    l.erase(l.begin()); // erase first element
    // l.begin() is the iterator

    cout << "After erase -> " << endl;
    for (int i : l) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Size of l: " << l.size() << endl;
    
    return 0;
}