#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

class Node{
public:
    int val;
    Node* left;
    Node* right;

    Node(int value){
        val = value;
        left = nullptr;
        right = nullptr;
    }
};

class Solution {
public:
    //BFS
    int treeMinValueBfs(Node* root){
        if(root == nullptr){
            return 0;
        }

        queue<Node*> q;
        q.push(root);
        int min_val = INT_MAX;

        while(!q.empty()){
            auto curr = q.front();
            q.pop();

            min_val = min(min_val, curr->val);
            if(curr->left) {
                q.push(curr->left);
            }
            if(curr->right) {
                q.push(curr->right);
            }
        }

        return min_val;
    }

    //DFS
    int treeMinValueDfs(Node* root){
        if(root == nullptr){
            return INT_MAX;
        }

        return min({root->val, treeMinValueDfs(root->left),
                                  treeMinValueDfs(root->right)});
    }
};
