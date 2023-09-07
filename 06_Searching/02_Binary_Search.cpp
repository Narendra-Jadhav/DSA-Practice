#include <iostream>
using namespace std;

// * BINARY SEARCH

int binarySearch(int arr[], int size, int key) {

    int start = 0;
    int end = size - 1;

    //! int mid = (start + end) / 2;
    //* This method to find mid can give out of range error for big values of start and end

    //* So for that
    int mid = start + (end - start) / 2;

    while (start <= end) {
        if (arr[mid] == key) {
            return mid;
        }
        
        if (key > arr[mid]) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int arr[] = {-1, 2, 4, 5, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    int key = 4;

    int position = binarySearch(arr, size, key);

    if (position != -1) {
        cout << "Element present at index: " << position << endl;
    }
    else {
        cout << "Element not present" << endl;
    }

    return 0;
}