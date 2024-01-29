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

    //Iterative
    vector<string> depthFirstValuesIt(Node* root){
        if(root == nullptr){
            return {""};
        }

        stack<Node*> st;
        st.push(root);
        vector<string> res;

        while(!st.empty()){
            auto curr = st.top();
            st.pop();
            res.push_back(curr->val);

            if(curr->left){
                st.push(curr->left);
            }
            if(curr->right){
                st.push(curr->right);
            }
        }
        return res;
    }

    //Recursion
    vector<string> depthFirstValuesRec(Node* root){
        vector<string> res;
        dfs(root, res);
        return res;
    }

    void dfs(Node* root, vector<string> &res){
        if(root == nullptr){
            return;
        }

        res.push_back(root->val);
        dfs(root->left, res);
        dfs(root->right, res);
    }
};