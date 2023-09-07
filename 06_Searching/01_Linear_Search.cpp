#include <iostream>
using namespace std;

//* LINEAR SEARCH

bool linearSearch(int arr[], int size, int key) {

    for (int i=0; i<size; i++) {
        if (arr[i] == key) {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[] = {2, 4, -5, 7, -3, 9, 11, -22, 10};

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    int size = sizeof(arr) / sizeof(arr[0]);

    bool found = linearSearch(arr, size, key);

    if (found) {
        cout << "Element is present" << endl;
    }
    else {
        cout << "Element is absent" << endl;
    }
    
    return 0;
}