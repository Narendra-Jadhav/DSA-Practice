#include <iostream>
#include "_Binary_Tree_Boiler_Plate_Code.cpp"
using namespace std;

//* Search an element in a BST
//? Returning the sub-tree of the node if it is present
node* searchBST(node* root, int val) {
    // base case
    if (root == NULL) {
        return root;
    }

    if (root -> data == val) {
        return root;
    }

    if (val > root -> data) {
        return searchBST(root -> right, val);
    }
    else {
        return searchBST(root -> left, val);
    }
}

int main()
{
    
    
    return 0;
}