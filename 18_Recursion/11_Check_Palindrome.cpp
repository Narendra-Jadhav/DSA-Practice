#include <iostream>
using namespace std;

//? Check Palindrome
bool checkPalindrome(string str, int i, int j) {

    //* Base case
    if (i > j) {
        return true;
    }

    if (str[i] != str[j]) {
        return false;
    }
    else {
        return checkPalindrome(str, i+1, j-1);
    }

}

int main()
{
    string name = "abbcbba";
    
    bool isPalindrome = checkPalindrome(name, 0, name.length() - 1);

    if (isPalindrome) {
        cout << "Yes, Palindrome" << endl;
    }
    else {
        cout << "No, Palindrome" << endl;
    }
    
    return 0;
}