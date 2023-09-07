#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    //     *
    //    **
    //   ***
    //  ****
    // *****
    for (int i=1; i<=n; i++) {
        int space = n - i;
        for (int j=1; j<=space; j++) {
            cout << " ";
        }

        int star = i;
        for (int j=1; j<=star; j++) {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;

    // *****
    // ****
    // ***
    // **
    // *
    for (int i=1; i<=n; i++) {
        for (int j=n-i+1; j>=1; j--) {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;

    // *****
    //  ****
    //   ***
    //    **
    //     *
    for (int i=1; i<=n; i++) {
        int space = i - 1;
        for (int j=1; j<=space; j++) {
            cout << " ";
        }

        int star = n - i + 1;
        for (int j=star; j>=1; j--) {
            cout << "*";
        }
        
        cout << endl;
    }
    
    return 0;
}