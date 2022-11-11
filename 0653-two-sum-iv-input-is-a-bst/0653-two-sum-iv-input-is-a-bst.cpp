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
    vector<int> m;
    void InOrderTraversal(TreeNode *root)
{
	if (!root)
		return;
	InOrderTraversal(root->left);
	m.push_back(root->val);
	InOrderTraversal(root->right);
}
public:
    bool findTarget(TreeNode* root, int k) {
        InOrderTraversal(root);
        int i=0,j=m.size()-1;
        while(i<j){
            if(m[i]+m[j]==k) return true;
            else
                if(m[i]+m[j]>k) j--;
                else i++;
        }
        return 0;
    }
};