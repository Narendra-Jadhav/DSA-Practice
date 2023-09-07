#include <iostream>
using namespace std;

//? Check is an array is Sorted
// int arr[] and int *arr both are correct
bool isSorted(int arr[], int size) {

    //* Base case
    // single element or no element are sorted
    if (size == 0 || size == 1) {
        return true;
    }

    if (arr[0] > arr[1]) {
        return false;
    }
    else {
        bool remainingPart = isSorted(arr + 1, size - 1);
        return remainingPart;
    }

}

int main()
{
    int arr[5] = {2, 8, 6, 7, 9};
    int size = 5;

    bool ans = isSorted(arr, size);

    if (ans) {
        cout << "Array is Sorted" << endl;
    }
    else {
        cout << "Array is Not Sorted" << endl;
    }
    
    return 0;
}