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
    TreeNode *LCA(TreeNode *root, TreeNode *first, TreeNode *second)
{
	if (!root)
	{
		return NULL;
	}
	if (root->val > first->val && root->val > second->val)
	{
		return LCA(root->left, first, second);
	}
	if (root->val < first->val && root->val < second->val)
	{
		return LCA(root->right, first, second);
	}
	return root;
}
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return LCA(root,p,q);
    }
};