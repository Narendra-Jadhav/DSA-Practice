#include <iostream>
using namespace std;

// Stack -> Static Memory
// Heap -> Dynamic Memory

/*
new char; -> new memory in heap
But we cannot give variable name in heap. It only returns address. So, we can save it using Pointer (created in Stack)

char* ch = new char;
*/

//? NOTE: Heap memory doesn't get free/released by itself. We have to do it manually using 'delete' keyword
//? int* i = new int;  --->  delete i;

//? int* arr = new int[50];  --->  delete []arr;

int getSum(int* arr, int n) {
    int sum = 0;
    for (int i=0; i< n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;

    //* Dynamic Memory Allocation of array of size n
    int* arr = new int[n];

    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    cout << "Sum is: " << getSum(arr, n);
    
    return 0;
}