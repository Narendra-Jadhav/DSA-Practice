#include <iostream>
using namespace std;

// * SELECTION SORT

void selectionSort(int arr[], int size) {

    // traversing the array n-1 times as, at the final time the last element will be at correct position
    for (int i=0; i < size-1; i++) {
        // for next array, taking first element as minElement
        int minIndex = i;

        // finding minimum element than the first element
        for (int j=i+1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // swapping first element with the minimum element of current array
        swap(arr[minIndex], arr[i]);
    }

}

void printArray(int arr[], int size) {
    for (int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {5, 2, 9, -4, 0, 8, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array before sorting" << endl;
    printArray(arr, size);

    selectionSort(arr, size);

    cout << "Array after sorting" << endl;
    printArray(arr, size);
    
    return 0;
}