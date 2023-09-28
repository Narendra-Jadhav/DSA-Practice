#include <iostream>
#include "_Binary_Tree_Boiler_Plate_Code.cpp"
using namespace std;

//* Minimum element in a BST -> the leftmost element
node* minVal(node* root) {
    node* temp = root;
    while(temp -> left != NULL) {
        temp = temp -> left;
    }

    return temp;
}

//* Delete Node from a BST
node* deleteFromBST(node* root, int val) {
    //base case
    if (root == NULL) {
        return root;
    }

    if (root -> data == val) {
        //* Delete the Node
        //? 0 child
        if (root -> left == NULL && root -> right == NULL) {
            delete root;
            return NULL;
        }

        //? 1 child
        // left child
        if (root -> left != NULL && root -> right == NULL) {
            node* temp = root -> left;
            delete root;
            return temp;
        }
        // right child
        if (root -> left == NULL && root -> right != NULL) {
            node* temp = root -> right;
            delete root;
            return temp;
        }

        //? 2 child
        if (root -> left != NULL && root -> right != NULL) {
            int mini = minVal(root -> right) -> data;
            root -> data = mini; // replace with minimum from right

            root -> right = deleteFromBST(root -> right, mini); // delete mini recursively from right subtree
            return root;
        }
    }
    else if (root -> data > val) {
        // left part mein jao
        root -> left = deleteFromBST(root -> left, val);
        return root;
    }
    else {
        // right part mein jao
        root -> right = deleteFromBST(root -> right, val);
        return root;
    }
}

int main()
{
    
    
    return 0;
}