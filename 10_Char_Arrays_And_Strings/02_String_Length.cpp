#include <iostream>
using namespace std;

//! NOTE: char arrays have no need to pass their size in the function as we can find the final char by '\0'
int getLength(char name[]) {
    int count = 0;

    for (int i=0; name[i] != '\0'; i++) {
        count++;
    }

    return count;
}

int main()
{
    char name[20];

    cin >> name;
    cout << "Name: " << name << endl;

    cout << "Length of string is: " << getLength(name) << endl;
    
    return 0;
}