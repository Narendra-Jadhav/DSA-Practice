#include <iostream>
using namespace std;

int main()
{
    char name[20];
    cin >> name;
    cout << "Name: " << name << endl;

    //* at the end of the char array/string '\0' (null character) gets automatically stored. Its ASCII value is 0

    string s = "Hello";

    cout << s << endl;

    s.push_back('K');
    s.push_back('m');
    s.pop_back();

    cout << s << endl;
    
    return 0;
}