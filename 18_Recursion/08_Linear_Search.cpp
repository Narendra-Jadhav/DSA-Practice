#include <iostream>
using namespace std;

//? Linear Search using Recursion
bool linearSearch(int arr[], int size, int key) {

    //* Base case
    if (size == 0) {
        return false;
    }

    //* first hum karte hai
    if (arr[0] == key) {
        return true;
    }
    //* baki wo kar lega
    else {
        bool remainingPart = linearSearch(arr + 1, size - 1, key);
        return remainingPart;
    }

}

int main()
{
    int arr[] = {3, 5, 1, 2, 6};
    int size = 5;
    int key = 0;

    bool ans = linearSearch(arr, size, key);

    if (ans) {
        cout << "Key Found" << endl;
    }
    else {
        cout << "Key NOT Found" << endl;
    }
    
    return 0;
}