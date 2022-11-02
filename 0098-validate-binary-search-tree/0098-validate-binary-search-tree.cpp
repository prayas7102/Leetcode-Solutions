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
    bool ans=1,first=1;
    int pre=0;
    void inorder(TreeNode* root){
        if(root==NULL) return;
        inorder(root->left);
        
        if(pre>=root->val && !first) ans=0;
        first=0;
        pre=root->val;
        
        inorder(root->right);
    }
public:
    bool isValidBST(TreeNode* root) {
        inorder(root);
        return ans;
    }
};