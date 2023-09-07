#include <iostream>
using namespace std;

//? Reverse String using Recursion
//? str passed as Reference Variable, to directly make changes to it
void reverseString(string& str, int i, int j) {

    //* Base case
    if (i > j) {
        return;
    }

    //* first case by us
    swap(str[i], str[j]);
    i++;
    j--;

    //* Recursive call
    reverseString(str, i, j);

}

int main()
{
    string name = "Hello";

    reverseString(name, 0, name.length() - 1);

    cout << name << endl;
    
    return 0;
}