#include <iostream>
#include <array>
using namespace std;

//* STL Array Data Structure

int main()
{
    int basicArray[3] = {1, 2, 3};

    array<int, 4> a = {1, 2, 3, 4}; // it is a static array

    int size = a.size();

    for (int i=0; i<size; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    cout << "Element at 2nd index: " << a.at(2) << endl;

    cout << "Array empty or not: " << a.empty() << endl;

    cout << "First element: " << a.front() << endl;

    cout << "Last element: " << a.back() << endl;
    
    return 0;
}