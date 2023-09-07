#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1(5, 1); // initializes vector of size 5 with all elements 1
    cout << "Print v1: " << endl;
    for (int i : v1) {
        cout << i << " ";
    }
    cout << endl;

    vector<int> copy_v1(v1); // copies all elements of v1 in copy_v1
    cout << "Print copy_v1: " << endl;
    for (int i : copy_v1) {
        cout << i << " ";
    }
    cout << endl;


    vector<int> v; // vector initialized with size and capacity 0
    cout << "Capacity -> " << v.capacity() << endl;

    v.push_back(1);
    cout << "Capacity -> " << v.capacity() << endl;

    v.push_back(2);
    cout << "Capacity -> " << v.capacity() << endl;

    v.push_back(3); // here it will double the capacity i.e 2 * 2 = 4
    cout << "Capacity -> " << v.capacity() << endl; // capacity -> total elements it can hold
    cout << "Size -> " << v.size() << endl; // size -> number of elements present now
    
    cout << "Element at index 2: " << v.at(2) << endl;

    cout << "Front: " << v.front() << endl;
    cout << "Back: " << v.back() << endl;

    cout << "Before Pop: " << endl;
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();

    cout << "After Pop: " << endl;
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Before clear size: " << v.size() << endl;
    cout << "Before clear capacity: " << v.capacity() << endl;
    v.clear(); // removes all the elements

    cout << "After clear size: " << v.size() << endl;
    cout << "After clear capacity: " << v.capacity() << endl;

    return 0;
}