#include <iostream>
#include <queue>
using namespace std;

//* Binary Tree Creation
class node {
    public:
        int data;
        node* left;
        node* right;

        // Constructor
        node(int d) {
            this -> data = d;
            this -> left = NULL;
            this -> right = NULL;
        }
};

//* Insert Node in BST
node* insertIntoBST(node* root, int data) {
    // base case
    if (root == NULL) {
        // create new node when we get root as null
        root = new node(data);
        return root;
    }

    if (data > root -> data) {
        // insert in right part
        root -> right = insertIntoBST(root -> right, data);
    }
    else {
        // insert in left part
        root -> left = insertIntoBST(root -> left, data);
    }
}

void takeInput(node* &root) {
    int data;
    cin >> data;

    while(data != -1) {
        root = insertIntoBST(root, data);
        cin >> data;
    }
}

//* Level Order Traversal / Breadth First Search (BFS)
void levelOrderTraversal(node* root) {
    queue<node*> q;
    q.push(root);
    q.push(NULL); // this NULL will work as a seperator for the level 0 and 1

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        if (temp == NULL) { // earlier level is completed
            cout << endl; // to seperate the levels
            if (!q.empty()) { // queue still has some child nodes
                q.push(NULL); // this NULL will work as a seperator for the levels
            }
        }
        else {
            cout << temp -> data << " ";
            // if temp -> left is not NULL
            if (temp -> left) {
                q.push(temp -> left);
            }
            if (temp -> right) {
                q.push(temp -> right);
            }
        }
    }
}

//* Inorder Traversal
void inorderTraversal(node* root) {
    // base case
    if (root == NULL) {
        return;
    }

    // LNR
    inorderTraversal(root -> left);
    cout << root -> data << " ";
    inorderTraversal(root -> right);
}

//* PreOrder Traversal
void preorderTraversal(node* root) {
    // base case
    if (root == NULL) {
        return;
    }

    // NLR
    cout << root -> data << " ";
    preorderTraversal(root -> left);
    preorderTraversal(root -> right);
}

//* PostOrder Traversal
void postorderTraversal(node* root) {
    // base case
    if (root == NULL) {
        return;
    }

    // LRN
    postorderTraversal(root -> left);
    postorderTraversal(root -> right);
    cout << root -> data << " ";
}

//* Create / Build Tree from Level Order Traversal
node* buildFromLevelOrder(node* root) {
    queue<node*> q;
    cout << "Enter data for root: " << endl;
    int data;
    cin >> data;
    root = new node(data);
    q.push(root);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        cout << "Enter left node for " << temp -> data << endl;
        int leftData;
        cin >> leftData;
        
        if (leftData != -1) {
            temp -> left = new node(leftData);
            q.push(temp -> left);
        }

        cout << "Enter right node for " << temp -> data << endl;
        int rightData;
        cin >> rightData;
        
        if (rightData != -1) {
            temp -> right = new node(rightData);
            q.push(temp -> right);
        }
    }
    return root;
}
