#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int count = 0;

    if (n != 0) {

        //* Count the number of Set Bits (1)
        while (n) {
            count += n & 1;
            n >>= 1;
        }
    }

    if (count == 1) {
        cout << "Yes, Power of 2" << endl;
    }
    else {
        cout << "Not a Power of 2" << endl;
    }
    
    return 0;
}