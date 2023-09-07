#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    //! IMP !

    //         1 
    //       1 2 1 
    //     1 2 3 2 1 
    //   1 2 3 4 3 2 1 
    // 1 2 3 4 5 4 3 2 1

    for (int i=1; i<=n; i++) {
        //Print first space
        int space = n - i;
        for (int j=1; j<=space; j++) {
            cout << "  ";
        }

        // Print first triangle
        for (int j=1; j<=i; j++) {
            cout << j << " ";
        }

        // Print second triangle
        for (int j=i-1; j>=1; j--) {
            cout << j << " ";
        }

        cout << endl;
    }
    
    return 0;
}