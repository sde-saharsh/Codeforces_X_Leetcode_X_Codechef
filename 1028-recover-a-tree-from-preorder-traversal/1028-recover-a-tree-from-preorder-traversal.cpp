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

    TreeNode* recoverFromPreorder(string traversal) {

        vector<pair<int,int>> nodes;
        int i =0;
        int n = traversal.size();
        while(i<n){
            int depth = 0;
            while(i<n &&traversal[i]=='-' ){
                depth++;
                i++;
            }
            int num = 0;
            while(i<n && traversal[i]!='-'){
                num = num*10 + (traversal[i]-'0');
                i++;
            }
            nodes.push_back({depth,num});
        }

        
        TreeNode* root = new TreeNode(nodes[0].second);
        stack<TreeNode*> st;
        st.push(root);
        for(int i=1;i<nodes.size();i++){
            int depth = nodes[i].first;
            int value = nodes[i].second;
            TreeNode* currNode = new TreeNode(value);
            while(st.size()>depth) st.pop();
            TreeNode* parent = st.top();

            if(parent->left==nullptr){
                parent->left = currNode;
            } else{
                parent->right = currNode;
            }

            st.push(currNode);
        }

        return root;
    }
};