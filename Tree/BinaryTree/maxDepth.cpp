#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <queue>
#include <stack>

//https://leetcode.com/problems/maximum-depth-of-binary-tree/

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(!root){
            return 0;
        }

        return max(1 + maxDepth(root->left), 1 + maxDepth(root->right));
    }

    //other solution
//    if(root == NULL){
//        return 0;
//    } else {
//        int left = maxDepth(root->left);
//        int right = maxDepth(root->right);
//        return max(right, left) + 1;
//    }

};


