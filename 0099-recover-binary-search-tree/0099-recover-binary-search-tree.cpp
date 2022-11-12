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
    vector<pair<int,TreeNode*>> v,p;
    void InOrderTraversal(TreeNode *root)
{
	if (!root)
		return;
	InOrderTraversal(root->left);
	v.push_back(make_pair(root->val,root));
	InOrderTraversal(root->right);
}
public:
    void recoverTree(TreeNode* root) {
        InOrderTraversal(root);
        p=v;
        sort(v.begin(), v.end());
        if(p==v) return;
        for(int i=0;i<v.size();i++){
            if(p[i].first!=v[i].first) p[i].second->val=v[i].first;
        }
    }
};