#include <iostream>
using namespace std;

void reverseArray(int arr[], int size) {

    for (int i=0; i<size/2; i++) {
        swap(arr[i], arr[size - i - 1]);
    }

}

void reverseArray2(int arr[], int size) {

    int start = 0, end = size-1;

    while(start <= end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

}

void printArray(int arr[], int size) {
    for (int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {2, 3, 5, 7, -3, -6, 0};

    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array before reversing: "<< endl;
    printArray(arr, size);
    cout << endl;

    reverseArray2(arr, size);

    cout << "Array after reversing: "<< endl;
    printArray(arr, size);
    cout << endl;
    
    return 0;
}