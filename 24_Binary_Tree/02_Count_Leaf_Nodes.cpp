#include <iostream>
#include "_Binary_Tree_Boiler_Plate_Code.cpp"
using namespace std;

void inorder(node* root, int &count) {
    // base case
    if (root == NULL) {
        return;
    }

    inorder(root -> left, count);

    if (root -> left == NULL && root -> right == NULL) {
        count++;
    }

    inorder(root -> right, count);
}

int countOfLeafNodes(node* root) {
    int cnt = 0;
    inorder(root, cnt);
    return cnt;
}

int main()
{
    node* root = NULL;
    root = buildTree(root);

    int ans = countOfLeafNodes(root);

    cout << "Number of Leaf Nodes: " << ans << endl;

    return 0;
}