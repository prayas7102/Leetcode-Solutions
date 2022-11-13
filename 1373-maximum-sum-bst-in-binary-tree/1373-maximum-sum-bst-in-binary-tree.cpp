// O(N) time O(1) time

class Info {
  public:
  int maxNode;
  int minNode;
  int msum;
  
  Info(int maxNode, int minNode, int msum){
      this->maxNode = maxNode;
      this->minNode = minNode;
      this->msum = msum;
  }
};


class Solution {
public:
    int ans = 0;
    
    Info helper(TreeNode* root){
        if(root == NULL) return Info(INT_MIN, INT_MAX, 0);
        Info left =  helper(root->left);
        Info right =  helper(root->right);
        
        if(root->val> left.maxNode && root->val <right.minNode){
            int sum = left.msum + right.msum + root->val;
            ans = max(ans,sum);
            return Info(max(root->val ,right.maxNode),min(root->val ,left.minNode),sum);
        }
        
        else{
            return Info(INT_MAX,INT_MIN,max(left.msum,right.msum));         
        }
    
    }
    
    int maxSumBST(TreeNode* root) {
        Info ans1 = helper(root);
    	return ans;
    }
};