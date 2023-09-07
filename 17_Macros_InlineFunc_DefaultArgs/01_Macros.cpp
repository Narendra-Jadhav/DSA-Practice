#include <iostream>
using namespace std;

//* MACRO -> no semicolon is needed
#define PI 3.14
#define wrong_min(a, b) ((a > b) ? a : b)
//* min function gives minimum; but here we made it and made it wrong

int main()
{
    double r = 5;
    double area = PI * r * r;

    cout << "Area: " << area << endl;

    int a = 34;
    int b = 16;

    cout << "Wrong Minimum: " << wrong_min(a, b);
    
    return 0;
}