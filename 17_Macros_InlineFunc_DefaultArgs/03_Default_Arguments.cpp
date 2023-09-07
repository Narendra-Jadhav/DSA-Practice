#include <iostream>
using namespace std;

//* Default Arguments -> If we want to make an argument optional
//? If we pass some value take that, else use the default value

//* Here start is default argument, as it is given value of 0
void printArray(int arr[], int n, int start = 0) {
    for(int i=start; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 4, 2, 7, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    //* value for start not passed, so by default 0 will be taken
    printArray(arr, size);

    //* 2 given for start, so 2 will be used and not 0
    printArray(arr, size, 2);
    
    return 0;
}