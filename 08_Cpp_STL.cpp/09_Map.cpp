#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

//* MAP
//? data is stored in key-value format
//? keys are unique
//? one key will point to one value

//? map gives keys in sorted manner; while unordered_map gives keys in random manner

//! map -> Red-Black trees / Balanced Trees implementation. Hence, Search -> O(log n)
//! unordered_map -> Hash table. Hence, Search -> O(1)

int main()
{
    map<int, string> m;
    // unordered_map<int, string> m;

    m[1] = "Hello";
    m[3] = "World";
    m[13] = "Bye";
    m.insert( {5, "Hey"} );

    cout << "Before erase: " << endl;
    for (auto i : m) {
        cout << i.first << " " << i.second << endl;
    }
    //* with i.first we can print key and with i.second value
    cout << endl;

    cout << "Finding 13 -> " << m.count(13) << endl;
    cout << "Finding -13 -> " << m.count(-13) << endl;

    m.erase(13);

    cout << "After erase: " << endl;
    for (auto i : m) {
        cout << i.first << " " << i.second << endl;
    }
    cout << endl;

    auto it = m.find(5);

    for (auto i=it; i != m.end(); i++) {
        cout << (*i).first << endl;
    }
    
    return 0;
}