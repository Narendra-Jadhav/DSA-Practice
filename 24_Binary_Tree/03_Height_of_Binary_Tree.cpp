#include <iostream>
#include "_Binary_Tree_Boiler_Plate_Code.cpp"
using namespace std;

//* HEIGHT of Binary Tree => longest path between root node and a leaf node -> no. of nodes in that path
//* OR Maximum Depth
//? T.C = O(n), S.C = O(height)

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

int main()
{
    
    
    return 0;
}