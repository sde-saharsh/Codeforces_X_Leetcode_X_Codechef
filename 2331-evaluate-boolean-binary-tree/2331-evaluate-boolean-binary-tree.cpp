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
    // 2 - or && 3 - and
    // 0 - false && 1 - true
    bool inorder(TreeNode* root){
        if(root==nullptr) return false;

        // first returnning
        if(root->val==1) return true;
        if(root->val==0) return false;

        bool left = inorder(root->left);
        bool right = inorder(root->right);

        if(root->val==2){
            return left || right;
        }
        return left && right;

    }
    bool evaluateTree(TreeNode* root) {
        return inorder(root);
    }
};