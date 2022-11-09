// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
//     int minValue(TreeNode *&root)
// {
// 	TreeNode *temp = root;
// 	while (temp->left)
// 	{
// 		temp = temp->left;
// 	}
// 	return temp->val;
// }
//     TreeNode *deletenode(TreeNode *root, int data)
// {

// 	if (!root)
// 		return root;

// 	if (root->val == data)
// 	{
// 		if (!root->left && !root->right)
// 		{
// 			delete root;
// 			return NULL;
// 		}
// 		else if (root->left && !root->right)
// 		{
// 			delete root;
// 			root = root->left;
// 			return root;
// 		}
// 		else if (!root->left && root->right)
// 		{
// 			delete root;
// 			root = root->right;
// 			return root;
// 		}
// 		else
// 		{
// 			int mini = minValue(root->right);
// 			root->val = mini;
// 			root->right = deleteNode(root->right, mini);
// 			return root;
// 		}
// 	}

// 	else if (root->val > data)
// 	{
// 		root->left = deleteNode(root->left, data);
// 		return root;
// 	}

// 	else
// 	{
// 		root->right = deleteNode(root->right, data);
// 		return root;
// 	}
// 	return root;
// }
// public:
//     TreeNode* deleteNode(TreeNode* root, int key) {
//         return deletenode(root,key);
//     }
// };
class Solution {
public:
    TreeNode* minVal(TreeNode *root){
        TreeNode *temp = root;
        while(temp->left != NULL){
            temp = temp->left;
        }
        return temp;
    }
    
    TreeNode* deleteNode(TreeNode* root, int key) {
        //base case 1
        if(root == NULL)
            return NULL;
    
        //base case 2
        if(root->val == key){
            //0 child
            if(root->left == NULL && root->right == NULL){
                delete root;
                return NULL;
            }

            //1 child
            //node has a left child
            if(root->left != NULL && root->right == NULL){
                TreeNode *temp = root->left;
                delete root;
                return temp;
            }

            //node has a right child
            if(root->left == NULL && root->right != NULL){
                TreeNode *temp = root->right;
                delete root;
                return temp;
            }

            //2 child - replace either with max of left subtree or min of right subtree
            if(root->left != NULL && root->right != NULL){
                int mini = minVal(root->right) -> val;
                root->val = mini;
                root->right = deleteNode(root->right , mini);
                return root;
            }
        }

        else if(root->val > key){
            root->left = deleteNode(root->left , key);
            return root;
        }
        else{
            root->right = deleteNode(root->right , key);
            return root;
        }
            return root;
    }
};