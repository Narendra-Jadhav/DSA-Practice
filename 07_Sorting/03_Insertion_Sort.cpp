#include <iostream>
using namespace std;

// * INSERTION SORT

void insertionSort(int arr[], int n) {

    // this can be written better with while loop

    // n-1 rounds
    for (int i=1; i<n; i++) {

        // without temp error will be there
        int temp = arr[i];
        int j;

        // traversing in reverse direction before i
        for (j= i-1; j>=0; j--) {
            
            if (arr[j] > temp) {
                // shift
                arr[j+1] = arr[j];
            }
            else {
                break;
            }

        }
        arr[j + 1] = temp;
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

    insertionSort(arr, size);

    cout << "Array after sorting" << endl;
    printArray(arr, size);
    
    return 0;
}