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
    vector<string> breadthFirstValues(Node* root){
        if(root == nullptr){
            return {""};
        }

        queue<Node*> q;
        vector<string> res;
        q.push(root);

        while(!q.empty()){
            auto curr = q.front();
            q.pop();
            res.push_back(curr->val);

            if(curr->left){
                q.push(curr->left);
            }
            if(curr->right){
                q.push(curr->right);
            }
        }
        return res;
    }
};