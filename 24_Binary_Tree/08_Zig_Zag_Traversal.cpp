#include <iostream>
#include "_Binary_Tree_Boiler_Plate_Code.cpp"
using namespace std;

vector<vector<int>> zigzagLevelOrder(node* root) {
    if (root == NULL) {
        return {};
    }

    queue<node*> q;
    q.push(root);

    vector<vector<int>> ans;
    bool leftToRight = true;

    while(!q.empty()) {
        int size = q.size();
        vector<int> row(size);

        // for loop for each level
        for(int i=0; i<size; i++) {

            node* temp = q.front();
            q.pop();

            // normal insert or reverse insert
            int index = leftToRight ? i : size - i - 1;
            row[index] = temp -> data;

            if (temp -> left) {
                q.push(temp -> left);
            }
            if (temp -> right) {
                q.push(temp -> right);
            }
        }
        // changing the direction after each level
        leftToRight = !leftToRight;
        ans.push_back(row);
    }
    return ans;
}

int main()
{
    
    
    return 0;
}