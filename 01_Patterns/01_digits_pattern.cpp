#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // 1 2 3 
    // 1 2 3 
    // 1 2 3 
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    cout << endl;

    // 1 2 3 
    // 4 5 6 
    // 7 8 9
    int k = 1;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            cout << k << " ";
            k++;
        }
        cout << endl;
    }

    cout << endl;

    // 1 2 3 
    // 2 3 4 
    // 3 4 5
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            cout << j + i - 1<< " ";
        }
        cout << endl;
    }

    return 0;
}