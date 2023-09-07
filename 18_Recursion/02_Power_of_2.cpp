#include <iostream>
using namespace std;

int powerOf2(int n) {

    //* Base Case
    if (n == 0) {
        return 1;
    }

    //* Recurrence relation -> F(n) = 2 * F(n-1)

    return 2 * powerOf2(n-1);
}

int main()
{
    int n;
    cin >> n;

    cout << "Power of 2: " << powerOf2(n) << endl;
    
    return 0;
}