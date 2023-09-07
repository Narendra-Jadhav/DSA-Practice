#include <iostream>
using namespace std;

string removeDuplicates(string s) {
    int len = s.length();
    for (int i = 0; i < len - 1; i++) {
        if (s[i] == s[i + 1]) {
            s.erase(i, 2);
            if (s.length() < 1) {
                return s;
            }
            else if (i == 0) {
                i--;
            }
            else {
                i = i - 2;
            }
        }
    }
    return s;
}

//** Method 2

string removeDuplicates2(string s) {
    string temp;

    for (char ch : s) {
        // temp is not empty and element on last location of temp is equal to current element of s, then remove that last element from temp
        if (!temp.empty() && temp[temp.size() - 1] == ch) {
            temp.pop_back();
        }
        // else add that character of s to temp
        else {
            temp += ch;
        }
    }
    return temp;
}

int main() {
    string str;
    cout << "Enter string: ";
    cin >> str;

    // cout << removeDuplicates(str) << endl;
    cout << removeDuplicates2(str) << endl;

    return 0;
}