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
    vector<int> v;
    void InOrderTraversal(TreeNode *root)
{
	if (!root) return;
	InOrderTraversal(root->left);
	v.push_back(root->val);
	InOrderTraversal(root->right);
}
    TreeNode* InOrderBST(int s, int e, vector<int> v)
{
	if (s>e) return NULL;
    int mid=(s+e)/2;
    TreeNode *root=new TreeNode(v[mid]);
	root->left=InOrderBST(s,mid-1,v);
	root->right=InOrderBST(mid+1,e,v);
    return root;
}
    
public:
    TreeNode* balanceBST(TreeNode* root) {
        InOrderTraversal(root);
        return InOrderBST(0,v.size()-1,v);
    }
};