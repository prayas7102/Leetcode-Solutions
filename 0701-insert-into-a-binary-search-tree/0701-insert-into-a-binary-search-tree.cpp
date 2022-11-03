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
    TreeNode *InsertIntoNode(TreeNode *root, int data)
{
	if (root == NULL)
	{
		TreeNode *newNode = new TreeNode(data);
		return newNode;
	}
	if (data < root->val)
	{
		root->left = InsertIntoNode(root->left, data);
	}
	else
	{
		root->right = InsertIntoNode(root->right, data);
	}
	return root;
}
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        return InsertIntoNode(root,val);
    }
};