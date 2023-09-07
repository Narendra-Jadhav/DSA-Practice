#include <iostream>
#include <vector>
using namespace std;

//? Phone Keypad Problem -> 2-9 digits correspond to alphabets in english on keypad.
//? So, finding the possible combinations with the given digits

void solve(string digits, string output, int index, vector<string>& ans, string mapping[]) {

    //* Base case
    if (index >= digits.length()) {
        ans.push_back(output);
        return;
    }

    // to convert char number into int
    int number = digits[index] - '0';
    string value = mapping[number]; // it will give like "abc"

    for (int i=0; i<value.length(); i++) {
        output.push_back(value[i]);
        solve(digits, output, index+1, ans, mapping);
        output.pop_back(); // for like backtracking
        // when we push 'a' and we have to go to 'b' we should remove 'a'. So, pop_back
    }

}

vector<string> letterCombinations(string digits) {
    vector<string> ans;
    if (digits.length() == 0) {
        return ans;
    }
    string output = "";
    int index = 0;
    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    solve(digits, output, index, ans, mapping);
}

int main()
{
    // int d = '2' - '0';
    // cout << d << endl;
    
    return 0;
}