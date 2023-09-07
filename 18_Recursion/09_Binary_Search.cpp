#include <iostream>
using namespace std;

//? Binary Search using Recursion

bool binarySearch(int arr[], int start, int end, int key) {

    //* Base case
    //* element not found
    if (start > end) {
        return false;
    }

    int mid = start + (end - start) / 2;

    //* element found
    if (arr[mid] == key) {
        return true;
    }

    if (arr[mid] < key) {
        return binarySearch(arr, mid+1, end, key);
    }
    else {
        return binarySearch(arr, start, mid-1, key);
    }

}

int main()
{
    int arr[] = {1, 4, 7, 9, 13};
    int size = 5;
    int key = 0;

    bool ans = binarySearch(arr, 0, size-1, key);

    if (ans) {
        cout << "Key Found" << endl;
    }
    else {
        cout << "Key NOT Found" << endl;
    }
    
    return 0;
}