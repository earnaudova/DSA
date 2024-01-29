#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

class Node{
public:
    string val;
    Node* left;
    Node* right;

    Node(string value){
        val = value;
        left = nullptr;
        right = nullptr;
    }
};

class Solution{
public:
    //BFS
    bool treeIncludeBfs(Node* root, string target){
        if(root == nullptr){
            return false;
        }

        queue<Node*> q;
        q.push(root);

        while(!q.empty()){
            auto curr = q.front();
            q.pop();

            if(curr->val == target){
                return true;
            }
            if(curr->left){
                q.push(curr->left);
            }
            if(curr->right){
                q.push(curr->right);
            }
        }

        return false;
    }

    //DFS
    bool treeIncludeDfs(Node* root, string target){
        if(root == nullptr){
            return false;
        }

        if(root->val == target){
            return true;
        }

        return treeIncludeDfs(root->left, target) ||
        treeIncludeDfs(root->right, target);
    }
};