#include <iostream>
#include <vector>
using namespace std;

vector<int> reverseVector(vector<int> v) {

    int s = 0, e = v.size() - 1;

    while(s <= e) {
        swap(v[s], v[e]);
        s++;
        e--;
    }

    return v;

}

//* Reverse Array after index m
void reverseVectorAfterM(vector<int> &v, int m) {

    int s = m+1, e = v.size() - 1;

    while(s <= e) {
        swap(v[s], v[e]);
        s++;
        e--;
    }

}

int main()
{
    int arr[] = {5, 2, 7, 1, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i=0; i<n/2; i++) {
        swap(arr[i], arr[n-i-1]);
    }

    for (auto i: arr) {
        cout << i << " ";
    }
    cout << endl;

    // Method 2
    vector<int> v = {11, 3, 6, 2, 18};

    vector<int> ans = reverseVector(v);

    for(auto i: ans) {
        cout << i << " ";
    }
    cout << endl;

    //* Reverse Array after index M
    cout << endl << "Reverse array after index m: " << endl;

    int m = 2;
    reverseVectorAfterM(v, m);

    for(auto i: v) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}