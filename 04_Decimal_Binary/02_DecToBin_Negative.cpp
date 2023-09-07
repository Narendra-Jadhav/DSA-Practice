#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int ans = 0;
    int i = 0;

    while (n != 0) {
        // rightmost bit
        int bit = n & 1;
        
        ans = (bit * pow(10, i)) + ans;

        // right shift
        n = n >> 1;
        i++;
    }

    cout << ans << endl;

    /*
    if negative number
    * taking absolute with abs() function
    * finding binary of that
    * finding 2's compliment of that -> 
    *   - 1's compliment
    *   - adding 1 in that
    * the result will be the binary of negative number
    */
    
    return 0;
}