#include <iostream>
#include <map>
#include <algorithm>
#include "_Binary_Tree_Boiler_Plate_Code.cpp"
using namespace std;

//* Vertical Order Traversal of Binary Tree
//? mapping => horizontal distance <-> levelwise nodes (mapping => level <-> nodes)
//? map <horizontal_distance, map<level, list_of_nodes>>;
//? queue <pair<node*, pair<horizontl_distance, level>>>;

vector<int> verticalOrder(node* root) {

    map<int, map<int, vector<int>>> nodes;
    queue<pair<node*, pair<int, int>>> q;
    vector<int> ans;

    if (root == NULL) {
        return ans;
    }

    q.push(make_pair(root, make_pair(0, 0)));

    while(!q.empty()) {
        pair<node*, pair<int, int>> temp = q.front();
        q.pop();

        node* frontNode = temp.first;
        int hd = temp.second.first;
        int lvl = temp.second.second;

        nodes[hd][lvl].push_back(frontNode -> data);

        if (frontNode -> left) {
            q.push(make_pair(frontNode -> left, make_pair(hd-1, lvl+1)));
        }
        if (frontNode -> right) {
            q.push(make_pair(frontNode -> right, make_pair(hd+1, lvl+1)));
        }
    }

    for(auto i: nodes) {
        for(auto j: i.second) {
            for(auto k: j.second) {
                ans.push_back(k);
            }
        }
    }
    return ans;

}

//* LeetCode
vector<vector<int>> verticalTraversal(node* root) {
    map<int, map<int, vector<int>>> nodes;
    queue<pair<node*, pair<int, int>>> q;
    vector<vector<int>> ans;

    if (root == NULL) {
        return ans;
    }

    q.push({root, {0, 0}});

    while(!q.empty()) {
        pair<node*, pair<int, int>> temp = q.front();
        q.pop();

        node* frontNode = temp.first;
        int hd = temp.second.first;
        int lvl = temp.second.second;

        nodes[hd][lvl].push_back(frontNode -> data);

        if (frontNode -> left) {
            q.push(make_pair(frontNode -> left, make_pair(hd-1, lvl+1)));
        }
        if (frontNode -> right) {
            q.push(make_pair(frontNode -> right, make_pair(hd+1, lvl+1)));
        }
    }

    for(auto i: nodes) {
        vector<int> v;

        for(auto j: i.second) {
            sort(j.second.begin(), j.second.end());

            for(auto k: j.second){
                v.push_back(k);
            }
        }
        ans.push_back(v);
    }
    return ans;
}

int main()
{
    
    
    return 0;
}