#include <iostream>
#include <vector>
using namespace std;

//* with this we can return the length of the compressed string vector and also the updated vector as it is given in argument as &chars
int compress(vector<char>& chars) {
    int i=0;
    int ansIndex = 0;
    int n = chars.size();

    while(i < n) {
        int j = i + 1;
        while(j < n && chars[i] == chars[j]) {
            j++;
        }

        // we will reach here
        // - if whole vector is traversed
        // - else different character is encountered

        // store oldChar
        chars[ansIndex++] = chars[i];
        
        int count = j - i;
        if (count > 1) {
            // converting count into single digit and saving in answer
            string cnt = to_string(count);
            for (char ch : cnt) {
                chars[ansIndex++] = ch;
            }
        }
        // moving to new/different character
        i = j;
    }
    return ansIndex;
}

int main()
{
    
    
    return 0;
}