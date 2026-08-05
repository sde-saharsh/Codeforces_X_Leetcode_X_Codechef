/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    // 0->left 1->right
    void solve(TreeNode* node, TreeNode* prev, int target, int left) {
        if (node == nullptr)
            return;

        solve(node->left, node, target, 0);
        solve(node->right, node, target, 1);
        if (node->left == nullptr && node->right == nullptr &&
            node->val == target) {
            if (left == 0) {
                prev->left = nullptr;
            } else {
                prev->right = nullptr;
            }
        }
    }
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        if (root == nullptr)
            return nullptr;
        TreeNode* prev = new TreeNode(-1);
        if (root->left == nullptr && root->right == nullptr &&
            root->val == target){
                return nullptr;
            }

        prev->left = root;
        solve(root, prev, target,0);
        return prev->left;
    }
};