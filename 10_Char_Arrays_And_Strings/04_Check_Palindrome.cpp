#include <iostream>
using namespace std;

int getLength(char name[]) {
    int count = 0;

    for (int i=0; name[i] != '\0'; i++) {
        count++;
    }

    return count;
}

bool checkPalindrome(char arr[], int len) {
    int s = 0;
    int e = len - 1;

    while(s <= e) {
        if (arr[s] != arr[e]) {
            return false;
        }
        s++;
        e--;
    }
    return true;
}

int main()
{
    char arr[20];
    cin >> arr;

    int len = getLength(arr);

    bool ans = checkPalindrome(arr, len);

    if (ans) {
        cout << "Yes, Palindrome" << endl;
    }
    else {
        cout << "Not a Palindrome" << endl;
    }
    
    return 0;
}