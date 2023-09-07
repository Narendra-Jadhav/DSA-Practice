#include <iostream>
using namespace std;

//* Inline Function
//? If the function body is of 1 line, we can make it inline
//? It works same as MACRO, i.e. before compiling the function comes to the place where it is called

inline int getMax(int a, int b) {
    return (a > b) ? a : b;
}

int main()
{
    int a = 43;
    int b = 66;

    cout << "Maximum: " << getMax(a, b) << endl;
    
    return 0;
}