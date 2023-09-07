#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // 1 2 3 4 5 5 4 3 2 1 
    // 1 2 3 4 * * 4 3 2 1 
    // 1 2 3 * * * * 3 2 1 
    // 1 2 * * * * * * 2 1 
    // 1 * * * * * * * * 1

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n-i+1; j++) {
            cout << j << " ";
        }

        for (int j=1; j<=i*2-2; j+=1) {
            cout << "* ";
        }

        for (int j=n-i+1; j>=1; j--) {
            cout << j << " ";
        }

        cout << endl;
    }
    
    return 0;
}