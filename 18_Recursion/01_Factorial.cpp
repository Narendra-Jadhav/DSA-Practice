#include <iostream>
using namespace std;

//* RECURSION -> when a function calls itself inside its body
//? if solution of big/complex problem depends on same type of small problem; use Recursion

int factorial(int n) {

    //? Base Case
    if (n == 0) {
        return 1;
    }

    //? Recurrence Relation
    //* F(n) = n * F(n-1)

    /*
    //* Small problem
    int small = factorial(n - 1);

    //* Big problem
    int big = n * small;

    return big;
    */

    //* in short we can write it as
    return n * factorial(n-1);
}

int main()
{
    int n;
    cin >> n;

    cout << "Factorial: " << factorial(n) << endl;
    
    return 0;
}