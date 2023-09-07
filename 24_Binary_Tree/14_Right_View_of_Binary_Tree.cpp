#include <iostream>
#include "_Binary_Tree_Boiler_Plate_Code.cpp"
using namespace std;

//* Right View of Binary Tree

void solve(node* root, vector<int> &ans, int level) {
    // base case
    if (root == NULL) {
        return;
    }

    // we entered into a new level
    if (level == ans.size()) {
        ans.push_back(root -> data);
    }

    // only this change than left view. right is before left
    solve(root -> right, ans, level + 1);
    solve(root -> left, ans, level + 1);
}

vector<int> rightView(node* root) {
    vector<int> ans;
    solve(root, ans, 0);
    return ans;
}

int main()
{
    
    
    return 0;
}