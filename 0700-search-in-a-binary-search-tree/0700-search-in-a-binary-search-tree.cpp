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
    TreeNode *ans=NULL;
    void findNode(TreeNode *root, int val){
        if(!root) return;
        findNode(root->left, val);
        if(root->val==val) ans = root;
        findNode(root->right, val);
    }
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        findNode(root,val);
        return ans;
    }
};