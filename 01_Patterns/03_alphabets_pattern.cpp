#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // A A A A A
    // B B B B B
    // C C C C C
    // D D D D D
    // E E E E E
    char ch = 'A';
    for (int i=1; i <= n; i++) {
        for (int j=1; j<=n; j++) {
            cout << ch << " ";
        }
        ch++;
        cout << endl;
    }

    cout << endl;

    // A B C D E
    // A B C D E
    // A B C D E 
    // A B C D E
    // A B C D E
    for (int i=1; i <= n; i++) {
        char ch = 'A';
        for (int j=1; j<=n; j++) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    cout << endl;

    // A B C D E 
    // F G H I J 
    // K L M N O 
    // P Q R S T
    // U V W X Y
    ch = 'A';
    for (int i=1; i <= n; i++) {
        for (int j=1; j<=n; j++) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    cout << endl;
    
    // A B C D E
    // B C D E F
    // C D E F G
    // D E F G H
    // E F G H I
    for (int i=1; i <= n; i++) {
        char ch = 'A' + i - 1;
        for (int j=1; j<=n; j++) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    //? OR

    cout << endl;
    
    for (int i=1; i <= n; i++) {
        for (int j=1; j<=n; j++) {
            char ch = 'A' + i + j - 2;
            cout << ch << " ";
        }
        cout << endl;
    }
    
    return 0;
}