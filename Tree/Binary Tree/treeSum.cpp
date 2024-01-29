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

class Solution{
public:
    //BFS
    int treeSumBfs(Node* root){
        if(root == nullptr){
            return 0;
        }

        queue<Node*> q;
        q.push(root);
        int sum = 0;

        while(!q.empty()){
            auto curr = q.front();
            q.pop();

            sum += curr->val;

            if(curr->left){
                q.push(curr->left);
            }
            if(curr->right){
                q.push(curr->right);
            }
        }
        return sum;
    }

    //DFS
    int treeSumDfs(Node* root){
        if(root == nullptr){
            return 0;
        }

        return root->val + treeSumDfs(root->left)
            + treeSumDfs(root->right);
    }
};