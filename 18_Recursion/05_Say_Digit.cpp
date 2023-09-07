#include <iostream>
using namespace std;

void sayDigit(int n, string arr[]) {

    //* base case -> if n == 0 after dividing by 10 return
    if (n == 0) return;

    //* processing
    int digit = n % 10;
    n = n / 10;

    //* Recursive function
    sayDigit(n, arr);

    //* to print in reverse order, written after recursive function
    cout << arr[digit] << " ";

}

int main()
{
    int n;
    cin >> n;

    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    sayDigit(n, arr);

    return 0;
}
