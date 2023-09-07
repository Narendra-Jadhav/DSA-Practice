#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int x = 123;

    int ans = 0;

    while (x != 0)
    {
        int digit = x % 10;

        //* if the range of the reverse number is outside int range, return 0
        /*
        ans * 10 > INT_MAX
        ans > INT_MAX / 10
        */
        if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10))
        {
            return 0;
        }

        ans = (ans * 10) + digit;

        x = x / 10;
    }

    cout << ans << endl;

    return 0;
}