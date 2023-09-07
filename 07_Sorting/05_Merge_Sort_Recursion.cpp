#include <iostream>
using namespace std;

//? MERGE SORT using Recursion - Arrays (not vectors)

void merge(int arr[], int s, int e) {

    int mid = s + (e - s) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    //* taking 2 new arrays and copying the elements of the array in them
    int *first = new int[len1];
    int *second = new int[len2];

    //* copy values
    int mainArrayIndex = s;
    for (int i=0; i<len1; i++) {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid+1;
    for (int i=0; i<len2; i++) {
        second[i] = arr[mainArrayIndex++];
    }

    //* merge 2 sorted arrays
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while (index1 < len1 && index2 < len2) {
        if (first[index1] < second[index2]) {
            arr[mainArrayIndex++] = first[index1++];
        }
        else {
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    while (index1 < len1) {
        arr[mainArrayIndex++] = first[index1++];
    }

    while (index2 < len2) {
        arr[mainArrayIndex++] = second[index2++];
    }

    delete []first;
    delete []second;

}

void mergeSort(int arr[], int s, int e) {

    //* Base Case
    if (s >= e) {
        return;
    }

    int mid = s + (e - s) / 2;

    //* sort left part
    mergeSort(arr, s, mid);

    //* sort right part
    mergeSort(arr, mid+1, e);

    //* merge sorted arrays
    merge(arr, s, e);

}

int main()
{
    int arr[] = {4, 1, 9, 0, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, size-1);

    for (auto x : arr) {
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}