#include <iostream>
#include <vector>
using namespace std;

// Move zeros to the right, while maintaining the relative order of other non-zero elements

void moveZeros(vector<int> &v) {
    
    int i=0;

    // if we get zero -> ignore, if non-zero swap it with i(first zero) and i++
    for (int j=0; j<v.size(); j++) {

        if (v[j] != 0) {
            swap(v[j], v[i]);
            i++;
        }

    }

}

int main()
{
    vector<int> v = {0, 1, 0, 3, 12};

    moveZeros(v);

    for (auto i: v) {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}