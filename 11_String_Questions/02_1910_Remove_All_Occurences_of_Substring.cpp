#include <iostream>
using namespace std;

// remove all occurences of part from s string
string removeOccurences(string s, string part) {

    // run the loop till string is left and if the part is present in the string
    while (s.length() != 0 && s.find(part) < s.length()) {

        // erase from the index of the part till the length of part
        s.erase(s.find(part), part.length());
    }
    return s;
}

int main()
{
    
    
    return 0;
}