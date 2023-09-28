#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i) {

    int largest = i;
    int left = 2*i;
    int right = 2*i + 1;

    if (left <= n && arr[largest] < arr[left]) {
        largest = left;
    }
    if (right <= n && arr[largest] < arr[right]) {
        largest = right;
    }

    if (largest != i) {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }

}

void heapSort(int arr[], int n) {

    int size = n;
    while(size > 1) {
        swap(arr[1], arr[size]);
        size--;

        heapify(arr, size, 1);
    }

}

int main()
{
    int arr[6] = {-1, 70, 60, 55, 45, 50};
    int n = 5;

    //* heap creation
    for(int i=n/2; i>0; i--) {
        heapify(arr, n, i);
    }

    heapSort(arr, n);

    cout << "After HeapSort: " << endl;
    for(int i=1; i<=n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}