#include <iostream>
#include "_Binary_Tree_Boiler_Plate_Code.cpp"
using namespace std;

//* Diameter or Width of Binary Tree => Longest path between any 2 nodes

//? Method 1
//? The path can even be a path without root node. i.e in the left or right subtree
// 1 -> diameter(root -> left);
// 2 -> diameter(root -> right);
// 3 -> combo of left and right => height(root -> left) + 1 + height(root -> right);

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

int diameter(node* root) {
    // base case
    if (root == NULL) {
        return 0;
    }

    int op1 = diameter(root -> left);
    int op2 = diameter(root -> right);
    int op3 = height(root -> left) + height(root -> right) + 1;

    int ans = max(op1, max(op2, op3));
    return ans;
}

//? Method 2 -> using pair<int, int> to bring diameter and height at the same time
pair<int, int> diameterFast(node* root) {
    // base case
    if (root == NULL) {
        pair<int, int> p = make_pair(0, 0);
        return p;
    }

    pair<int, int> left = diameterFast(root -> left);
    pair<int, int> right = diameterFast(root -> right);

    int op1 = left.first;
    int op2 = right.first;
    int op3 = left.second + right.second + 1;

    pair<int, int> ans;
    ans.first = max(op1, max(op2, op3));
    ans.second = max(left.second, right.second) + 1;

    return ans;
}

int main()
{
    
    
    return 0;
}