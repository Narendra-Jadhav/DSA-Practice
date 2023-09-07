#include <iostream>
using namespace std;

char toLowerCase(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        ch = ch - 'A' + 'a';
    }
    return ch;
}

//* 'B'
//* B - A = 1
//* 1 + a = b
//* Hence, we will get 'b' for 'B'

int main()
{
    char a = 'p';
    char b = 'H';
    char c = '$';

    cout << "LowerCase of Char p: " << toLowerCase(a) << endl;
    cout << "LowerCase of Char H: " << toLowerCase(b) << endl;
    cout << "LowerCase of Char $: " << toLowerCase(c) << endl;
    
    return 0;
}