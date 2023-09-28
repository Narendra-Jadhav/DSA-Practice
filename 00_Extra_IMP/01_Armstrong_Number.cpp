#include <iostream>
using namespace std;

//? Armstrong Number -> a number is Armstrong if the sum of cubes of its digits is equal to the number
//? eg. 153 -> 1*1*1 + 5*5*5 + 3*3*3 = 1 + 125 + 27 = 153

bool isArmstrong(int n) {
    int sum = 0;
    int temp = n;
    while(temp != 0) {
        int digit = temp % 10;
        sum += digit * digit * digit;
        temp = temp / 10;
    }
    if (sum == n) {
        return true;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;

    bool check = isArmstrong(n);

    if (check) {
        cout << "Yes, Armstrong" << endl;
    }
    else {
        cout << "Not Armstrong" << endl;
    }
    
    return 0;
}