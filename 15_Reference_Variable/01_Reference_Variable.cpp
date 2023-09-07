#include <iostream>
using namespace std;

//* Reference Variable -> Same memory, Different names

//? Pass By Value -> Copy of the variable is created, and changes are done in the copy
void update1(int n) {
    n++;
}

//? Pass By Reference -> Reference Variable for the variable passed is created, so this variable is pointing to the memory location
//? of the variable passed. Hence, changes done are done to the original variable
void update2(int& n) {
    n++;
}

int main()
{
    int i = 5;
    //* Reference Variable -> j
    int& j = i;
    
    cout << i << endl;
    i++;
    cout << j << endl;
    j++;
    cout << i << endl;

    cout << endl;
    //*------

    int a = 3;
    cout << a << endl;
    update1(a);
    cout << a << endl;
    update2(a);
    cout << a << endl;

    return 0;
}