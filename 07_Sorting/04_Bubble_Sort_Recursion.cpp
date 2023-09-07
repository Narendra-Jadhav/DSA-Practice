#include <iostream>
using namespace std;

//? Bubble Sort using Recursion

void bubbleSort(int arr[], int n) {

    //* Base Case - already sorted
    if (n == 0 || n == 1) {
        return;
    }

    //* Solving 1 case -> putting largest element at rightmost 
    for (int i=0; i< n-1; i++) {
        if (arr[i] > arr[i+1]) {
            swap(arr[i], arr[i+1]);
        }
    }

    //* Recursive -> for other cases
    bubbleSort(arr, n-1);

}

int main()
{
    int arr[5] = {4, 1, 8, 5, 0};
    
    bubbleSort(arr, 5);

    for (auto x : arr) {
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}