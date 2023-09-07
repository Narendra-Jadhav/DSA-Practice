#include <iostream>
using namespace std;

char getMaxOccCharacter(string s) {
    int arr[26] = {0}; // array for count of all alphabets

    //create an array of count of characters
    for(int i=0; i<s.length(); i++) {
        char ch = s[i];
        //lowercase
        int number = 0;
        if (ch >= 'a' && ch <= 'z') {
            number = ch - 'a';
        }
        // uppercase
        else {
            number = ch - 'A';
        }
        // number will be respective number of the character. i.e. 0 for a
        arr[number]++;
    }

    // find maximum occuring character in arr
    int maxi = -1, ans = 0;
    for (int i=0; i<26; i++) {
        if (arr[i] > maxi) {
            ans = i;
            maxi = arr[i];
        }
    }

    char finalAns = ans + 'a'; // to get the maximum occuring character 
    
    return finalAns;
}

int main()
{
    string s;
    cin >> s;

    cout << "Maximum occuring character of s is: " << getMaxOccCharacter(s) << endl;
    
    return 0;
}