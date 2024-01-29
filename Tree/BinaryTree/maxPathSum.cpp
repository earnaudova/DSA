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
    int maxPathSum(Node* root){
        if(root == nullptr){
            return INT_MIN;
        }
        if(root->left == nullptr && root->right == nullptr){
            return root->val;
        }
        return root->val + max(maxPathSum(root->left),
                               maxPathSum(root->right));
    }
};