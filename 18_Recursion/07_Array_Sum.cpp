#include <iostream>
using namespace std;

//? Find the Sum of the array

int getSum(int arr[], int size) {

    //* Base case
    if (size <= 0) {
        return 0;
    }

    return (getSum(arr, size - 1) + arr[size - 1]);

}

int getSum2(int arr[], int size) {

    //* Base case
    if (size == 0) {
        return 0;
    }
    if (size == 1) {
        return arr[0];
    }

    //* bakika part
    int remainingPart = getSum2(arr + 1, size - 1);
    int sum = arr[0] + remainingPart;

    return sum;

}

int main()
{
    int arr[] = {3, 2, 5, 1, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << getSum(arr, size) << endl;
    cout << getSum2(arr, size) << endl;
    
    return 0;
}