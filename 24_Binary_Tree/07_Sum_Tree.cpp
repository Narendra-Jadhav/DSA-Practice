#include <iostream>
#include "_Binary_Tree_Boiler_Plate_Code.cpp"
using namespace std;

//* Sum Tree => For all the nodes except the leaf nodes, return if sum of left and right subtree is equal to the node

pair<bool, int> isSumTreeFast(node* root) {
    if (root == NULL) {
        return {true, 0};
    }

    if (root -> left == NULL && root -> right == NULL) {
        return {true, root -> data};
    }

    pair<bool, int> left = isSumTreeFast(root -> left);
    pair<bool, int> right = isSumTreeFast(root -> right);

    bool leftAns = left.first;
    bool rightAns = right.first;

    bool condn = root -> data == left.second + right.second;

    pair<bool, int> ans;
    if (leftAns && rightAns && condn) {
        ans.first = true;
        ans.second = 2 * root -> data;
    }
    else {
        ans.first = false;
    }
    return ans;
}

int main()
{
    
    
    return 0;
}