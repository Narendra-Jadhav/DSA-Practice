#include <iostream>
#include <set>
using namespace std;

//* SET -> unique elements are stored in it
//? BST is implemented in it
//? elements are returned in sorted order
//? we cannot modify an element. We can either put or delete an element

int main()
{
    set<int> s;

    s.insert(5); // O(log n) time complexity
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    s.insert(0);
    s.insert(0);

    for (auto i : s) {
        cout << i << " ";
    }
    cout << endl;

    set<int> :: iterator it = s.begin();
    it++;
    s.erase(it);

    for (auto i : s) {
        cout << i << " ";
    }
    cout << endl;

    cout << "5 is present or not: " << s.count(5) << endl;
    cout << "-5 is present or not: " << s.count(-5) << endl;

    set<int> :: iterator itr = s.find(5); // gives reference to the location of 5

    for (auto it=itr; it != s.end(); it++) {
        cout <<*it << " ";
    }
    cout << endl;
    
    return 0;
}