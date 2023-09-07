#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    /*
    n = 5 -> 101
    Complement = 010 => 2
    */

    int m = n;
    int mask = 0;

    //! edge case
    if (n == 0)
    {
        return 1;
    }

    //* loop as many times, till we get leftmost 1 by doing rightshift of m
    while (m != 0)
    {
        //* that many times left shift of mask and OR with 1 to give that many 1's on right
        mask = (mask << 1) | 1;
        m = m >> 1;
    }
    
    int ans = (~n) & mask;

    cout << ans << endl;

    return 0;
}