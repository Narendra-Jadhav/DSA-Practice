#include <iostream>
#include "_Binary_Tree_Boiler_Plate_Code.cpp"
using namespace std;

//* Check for Balanced Tree => A tree is balanced if difference between heights of left and right subtrees is not more than one for all nodes

//? Method 1
int height(node* root) {
    // base case
    if (root == NULL) {
        return 0;
    }

    int left = height(root -> left);
    int right = height(root -> right);

    int height = max(left, right) + 1;
    return height;
}

bool isBalanced(node* root) {
    //  base case
    if (root == NULL) {
        return true;
    }

    bool left = isBalanced(root -> left);
    bool right = isBalanced(root -> right);

    bool diff = abs(height(root -> left) - height(root -> right)) <= 1;

    if (left && right && diff) {
        return true;
    }
    else {
        return false;
    }
}

//? Method 2 -> using pair<bool, int>

pair<bool, int> isBalancedFast(node* root) {
    // base case
    if (root == NULL) {
        pair<bool, int> p = make_pair(true, 0);
        return p;
    }

    pair<bool, int> left = isBalancedFast(root -> left);
    pair<bool, int> right = isBalancedFast(root -> right);

    bool leftAns = left.first;
    bool rightAns = right.first;

    bool diff = abs(left.second - right.second) <= 1;

    pair<bool, int> ans;
    ans.second = max(left.second, right.second) + 1;

    if (leftAns && rightAns && diff) {
        ans.first = true;
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