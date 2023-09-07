#include <iostream>
#include <deque>
using namespace std;

//* Deque -> Double Ended Queue
//? Double-ended queues are a special case of queues where insertion and deletion operations are possible at both the ends.
// We can push and pop from any end

int main()
{
    deque<int> d;

    d.push_back(1);
    d.push_front(2);
    d.push_front(3);

    for (int i : d) {
        cout << i << " ";
    }
    cout << endl;

    d.pop_front();
    d.pop_back();

    for (int i : d) {
        cout << i << " ";
    }
    cout << endl;

    d.push_back(5);
    d.push_front(3);

    for (int i : d) {
        cout << i << " ";
    }
    cout << endl;

    cout << "First Index element -> " << d.at(1) << endl;

    cout << "Front: " << d.front() << endl;
    cout << "Back " << d.back() << endl;

    cout << "Empty or not: " << d.empty() << endl;

    cout << "Size before erase: " << d.size() << endl;

    d.erase(d.begin(), d.begin() + 1); // means from begin to less than begin + 1 will be deleted. i.e first element
    // Here only the size of deque is decreasing not the capacity or max_size

    cout << "Size after erase: " << d.size() << endl;

    for (int i : d) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}