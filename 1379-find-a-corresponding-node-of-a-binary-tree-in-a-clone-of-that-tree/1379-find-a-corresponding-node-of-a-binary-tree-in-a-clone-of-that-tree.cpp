/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* inorder(TreeNode* root,TreeNode* target){
        if(root==nullptr) return nullptr;
        if(target->val==root->val) return root;

        TreeNode* left = inorder(root->left,target);
        TreeNode* right = inorder(root->right,target);
        
        if(left!=nullptr) return left;
        if(right!=nullptr) return right;
        return nullptr;
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        return inorder(cloned,target);
    }
};