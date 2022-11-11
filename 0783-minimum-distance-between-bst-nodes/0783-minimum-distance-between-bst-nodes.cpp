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
    int prev=INT_MAX;
    int mini=INT_MAX;
    void InOrderTraversal(TreeNode *root, int &prev)
{
	if (!root)
		return;
	InOrderTraversal(root->left,prev);
    mini=min(mini,abs(root->val-prev));
	prev=root->val;
	InOrderTraversal(root->right,prev);
}
public:
    int minDiffInBST(TreeNode* root) {
        InOrderTraversal(root,prev);
        return mini;
    }
};