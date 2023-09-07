#include <iostream>
using namespace std;

// * BUBBLE SORT

void bubbleSort(int arr[], int n) {

    // for more optimization
    bool swapped = false;

    // n-1 rounds
    for (int i=1; i < n; i++) {

        // in each round performing the swapping procedure to place the largest element of that round, at its correct place
        for (int j=0; j < n-i; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
            // else ignore
        }

        // if at some time no swaps happen, then the array is sorted, and we can break the loop
        if (swapped == false) {
            break;
        }
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

    bubbleSort(arr, size);

    cout << "Array after sorting" << endl;
    printArray(arr, size);
    
    return 0;
}