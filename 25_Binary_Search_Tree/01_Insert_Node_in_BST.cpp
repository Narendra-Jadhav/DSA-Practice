#include <iostream>
#include <queue>
using namespace std;

class node {
    public:
        int data;
        node* left;
        node* right;

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

int main()
{
    node* root = NULL;

    cout << "Enter data to create BST: " << endl;
    takeInput(root);

    cout << "Printing the BST: " << endl;
    levelOrderTraversal(root);
    
    return 0;
}