/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool solve(TreeNode* node,int value){
        if(node==nullptr) return true;
        if(node->val!=value) return false;

        bool leftt = solve(node->left,value);
        bool rightt = solve(node->right,value);

        return leftt && rightt;
    }
    bool isUnivalTree(TreeNode* root) {
        if(root==nullptr) return false;
        int value = root->val;
        return solve(root,value);
    }
};