#include <iostream>
using namespace std;

int main()
{
    /*
    ! Separating the digits of a number !
    eg. 234 -> 2, 3, 4

    * for that in a loop:
    * n % 10 -> it will give the remainder i.e last digit
    * n / 10 -> it will remove that last digit, and give the remaining part

    * if the remaining part = 0 -> then stop
    */

    int n = 234;

    while (n != 0)
    {
        int remainder = n % 10;
        cout << remainder << endl;
        n = n / 10;
    }

    return 0;
}