#include <iostream>
using namespace std;

//? if n=5; print 5 4 3 2 1
void printCounting1(int n) {

    //* Base Case
    if (n == 0) {
        return;
    }

    //* Processing
    cout << n << " ";

    //* Recursive Relation
    printCounting1(n - 1);

    //? Recursive Relation afterwards -> Tail Recursion
}

//? if n=5; print 1 2 3 4 5
void printCounting2(int n) {

    //* Base Case
    if (n == 0) {
        return;
    }

    //* Recursive Relation
    printCounting2(n - 1);

    //? Recursive Relation before -> Head Recursion

    //* Processing
    cout << n << " ";
}

int main()
{
    int n;
    cin >> n;

    printCounting1(n);

    cout << endl;

    printCounting2(n);
    
    return 0;
}