#include <iostream>
using namespace std;

int main()
{
    /*
    ! Count of 1's in a binary string
    */

    uint32_t n = 5;

    int count = 0;

    //* if number has become zero, means no 1 is left in the binary string
    while (n != 0)
    {
        //* checking last bit
        if (n & 1)
        {
            count++;
        }
        //* right shift
        n = n >> 1;
    }

    cout << count << endl;

    return 0;
}