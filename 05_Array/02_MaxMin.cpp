#include <iostream>
using namespace std;

int getMax(int arr[], int size) {
    int maxi = INT32_MIN;

    for (int i=0; i<size; i++) {
        // if (arr[i] > maxi) {
        //     maxi = arr[i];
        // }
        //*OR

        maxi = max(maxi, arr[i]);
    }

    return maxi;
}

int getMin(int arr[], int size) {
    int mini = INT32_MAX;

    for (int i=0; i<size; i++) {
        // if (arr[i] < mini) {
        //     mini = arr[i];
        // }
        //* OR

        mini = min(mini, arr[i]);
    }

    return mini;
}

int main()
{
    int arr[] = {4, -7, 2, 9, 13};

    int arrSize = sizeof(arr) / sizeof(arr[0]);

    cout << "Min: " << getMin(arr, arrSize) << endl << "Max: " << getMax(arr, arrSize) << endl;
    
    return 0;
}