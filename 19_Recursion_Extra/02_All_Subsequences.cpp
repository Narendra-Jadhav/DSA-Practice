#include <iostream>
#include <vector>
using namespace std;

//? Subsequences -> like the Power Set of a String
//* They are also 2^n
//* Doing this also with exclude, include, index

void solve(string str, string output, int index, vector<string>& ans) {

    //* Base case
    if (index >= str.length()) {
        // to exclude empty string
        if (output.length() > 0) {
            ans.push_back(output);
        }
        return;
    }

    //* exclude
    solve(str, output, index+1, ans);

    //* include
    char element = str[index];
    output.push_back(element);
    solve(str, output, index+1, ans);

}

vector<string> subsequences(string str) {
    vector<string> ans;
    string output = "";
    int index = 0;
    solve(str, output, index, ans);
    return ans;
}

int main()
{  
    string str = "abc";
    vector<string> ans = subsequences(str);

    for (auto x: ans) {
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}