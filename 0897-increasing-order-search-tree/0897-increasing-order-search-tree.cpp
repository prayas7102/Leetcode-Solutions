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
    TreeNode* newroot;
    vector<int> A;
    TreeNode* build(int &i){
        if( i==A.size()) { return NULL;}
        TreeNode* newroot= new TreeNode(A[i++]);
        newroot->left=NULL;
        newroot->right=build(i);
        return newroot;
    }
    void inorder(TreeNode* root){
        if(!root) return;
        inorder(root->left);
        A.push_back(root->val);
        inorder(root->right);
    }
    
public:
    TreeNode* increasingBST(TreeNode* root) {
        inorder(root);
        int i=0;
        return build(i);
    }
};