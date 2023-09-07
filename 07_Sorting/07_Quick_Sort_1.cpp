#include <iostream>
using namespace std;

//? QuickSort using Recursion - Array

int partition(int arr[], int s, int e) {

    int pivot = arr[s];

    int cnt = 0;
    for(int i=s+1; i<=e; i++) {
        if (arr[i] <= pivot) {
            cnt++;
        }
    }

    //* place pivot at right position
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);

    //* left of pivot should have smaller elements, and right should have greater elements than pivot
    int i = s, j = e;

    while(i < pivotIndex && j > pivotIndex) {

        while(arr[i] <= pivot) {
            i++;
        }
        while(arr[j] > pivot) {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int s, int e) {

    //* Base Case
    if (s >= e) {
        return;
    }

    //* Partition
    int p = partition(arr, s, e);

    //* Sort left part
    quickSort(arr, s, p-1);

    //* Sort right part
    quickSort(arr, p+1, e);

}

int main()
{
    int arr[] = {3, 5, 1, 12, 8, 2};
    int n = 6;

    quickSort(arr, 0, n-1);

    for (auto x : arr) {
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}