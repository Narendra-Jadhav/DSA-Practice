#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &a, int s, int e)
{
    int pivot = a[e];
    int i = s - 1;

    for(int j = s; j < e; j++)
    {
        if (a[j] < pivot) {
            i++;
            swap(a[i], a[j]);
        }
        // else if a[j] > pivot, then only j++ will happen
    }

    swap(a[i+1], a[e]); // at last putting the pivot element in between

    return i+1;
}

void quicksort(vector<int> &a, int s, int e)
{
    // base case
    if (s >= e) {
        return;
    }

    // recursive case
    int p = partition(a, s, e); // p is the index of the pivot after the partition is done
    // so, applying quicksort on the two parts having values, less than and greater than p
    quicksort(a, s, p-1);
    quicksort(a, p+1, e);
}

int main()
{
    vector<int> arr{10,5,2,0,7,6,4};
    cout << arr.size() << endl;

    int n = arr.size();

    quicksort(arr, 0, n-1);

    for (int x : arr)
    {
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}