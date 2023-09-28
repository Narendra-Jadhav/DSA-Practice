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

//* Maximum element in a BST -> the rightmost element
node* maxVal(node* root) {
    node* temp = root;
    while(temp -> right != NULL) {
        temp = temp -> right;
    }

    return temp;
}

int main()
{
    node* root = NULL;

    takeInput(root);

    node* minElement = minVal(root);
    cout << "Minimum element: " << minElement -> data << endl;

    node* maxElement = maxVal(root);
    cout << "Maximum element: " << maxElement -> data << endl;
    
    return 0;
}