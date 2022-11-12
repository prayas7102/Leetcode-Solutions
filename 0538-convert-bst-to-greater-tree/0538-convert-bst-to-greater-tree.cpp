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
    vector<pair<TreeNode*,int>> v;
    int prev=0;
    void Inorder(TreeNode* root){
        if(!root) return;
        Inorder(root->left);
        v.push_back(make_pair(root,prev+root->val));
        prev+=root->val;
        Inorder(root->right);
    }
public:
    TreeNode* convertBST(TreeNode* root) {
        Inorder(root);
        for(auto a:v){
            a.first->val+=prev-a.second;
        }
        return root;
    }
};