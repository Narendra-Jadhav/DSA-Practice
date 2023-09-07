#include <iostream>
#include <queue>
using namespace std;

//* TREE -> Non-Linear Data Structure
//* BINARY TREE => 0, 1 or 2 children

//? Node, Root, Children, Parent, Siblings, Ancestor, Descendant, Leaf

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

//* Creation or Build a Binary Tree
node* buildTree(node* root) {

    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1) {
        return NULL;
    }

    cout << "Enter data for inserting in left of " << data << endl;
    root -> left = buildTree(root -> left);

    cout << "Enter data for inserting in right of " << data << endl;
    root -> right = buildTree(root -> right);

    return root;
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

//? M -2
vector<vector<int>> levelOrder(node* root) {
    if (root == NULL) {
        return {};
    }
    queue<node*> q;
    q.push(root);

    vector<vector<int>> ans = {};

    while(!q.empty()){
        int s = q.size();
        vector<int> v;
        for(int i=0; i<s; i++) {
            node* temp = q.front();
            q.pop();

            if(temp -> left) {
                q.push(temp -> left);
            }
            if (temp -> right) {
                q.push(temp -> right);
            }

            v.push_back(temp -> data);
        }
        ans.push_back(v);
    }
    return ans;
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

int main()
{
    node* root = NULL;

    //* creating a tree
    // root = buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    root = buildFromLevelOrder(root);

    //* Level Order Traversal / Breadth First Search (BFS)
    cout << "Printing the level order traversal: " << endl;
    levelOrderTraversal(root);

    cout << endl;
    cout << "Inorder Traversal: " << endl;
    inorderTraversal(root);

    cout << endl;
    cout << "Preorder Traversal: " << endl;
    preorderTraversal(root);

    cout << endl;
    cout << "Postorder Traversal: " << endl;
    postorderTraversal(root);
    
    return 0;
}