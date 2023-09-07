#include <iostream>
#include <map>
#include <algorithm>
#include "_Binary_Tree_Boiler_Plate_Code.cpp"
using namespace std;

//* Bottom View of Binary Tree

vector<int> bottomView(node* root) {
    vector<int> ans;
    if (root == NULL) {
        return ans;
    }

    map<int, int> topNode;
    queue<pair<node*, int>> q;

    q.push({root, 0});

    while(!q.empty()) {
        pair<node*, int> temp = q.front();
        q.pop();

        node* frontNode = temp.first;
        int hd = temp.second;

        // only this condition got removed here other than top view code
        topNode[hd] = frontNode -> data;

        if (frontNode -> left) {
            q.push({frontNode -> left, hd - 1});
        }
        if (frontNode -> right) {
            q.push({frontNode -> right, hd + 1});
        }
    }

    for(auto i: topNode) {
        ans.push_back(i.second);
    }

    return ans;
}

int main()
{
    
    
    return 0;
}