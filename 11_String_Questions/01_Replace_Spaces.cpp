#include <iostream>
using namespace std;

//* Replace spaces with '@40'

string replaceSpaces(string str) {
    string temp = "";

    for (int i=0; i<str.length(); i++) {
        if (str[i] == ' ') {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else {
            temp.push_back(str[i]);
        }
    }
    return temp;
}

//* METHOD 2 -> without taking extra string
string replaceSpacesWithoutExtraString(string str){
    string s="@40";
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==' ')
        {
            str.replace(i,1,s);
            //* str1.replace(pos,len,str2); -> len = number of characters to be replaced
        }
    }
    return str;
}

int main()
{
    string str = "My Name is Khan";

    cout << replaceSpaces(str) << endl;

    cout << replaceSpacesWithoutExtraString(str) << endl;
    
    return 0;
}