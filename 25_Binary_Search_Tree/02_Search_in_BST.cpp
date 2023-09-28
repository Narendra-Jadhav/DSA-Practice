#include <iostream>
#include "_Binary_Tree_Boiler_Plate_Code.cpp"
using namespace std;

//* Search an element in a BST
//? Returning the sub-tree of the node if it is present
// Method 1 -> Recursive Method
bool searchInBST(node* root, int val) {
    // base case
    if (root == NULL) {
        return false;
    }

    if (root -> data == val) {
        return true;
    }

    if (val > root -> data) {
        return searchInBST(root -> right, val);
    }
    else {
        return searchInBST(root -> left, val);
    }
}

// Method 2 -> Iterative Method
bool searchInBST2(node* root, int val) {
    while(root != NULL) {
        if (root -> data == val) {
            return true;
        }

        if (root -> data > val) {
            root = root -> left;
        }
        else {
            root = root -> right;
        }
    }
    return false;
}

int main()
{
    
    
    return 0;
}