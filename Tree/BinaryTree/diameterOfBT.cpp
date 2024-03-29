#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <queue>
#include <stack>

//https://leetcode.com/problems/diameter-of-binary-tree/

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
    int diameterOfBinaryTree(TreeNode* root) {
        int d = 0;
        dfs(root, d);
        return d;
    }

    int dfs(TreeNode* root, int &d){
        if(!root){
            return 0;
        }

        int left = dfs(root->left, d);
        int right = dfs(root->right, d);

        d = max(d, left+right);

        return max(left, right) + 1;
    }
};
