class Solution {
    int houseRob(vector<int>& nums, int n, vector<int>& dp){
        if(n==0) return nums[n];
        if(n<0) return 0;
        if(dp[n]!=-1) return dp[n];
        int left=nums[n]+houseRob(nums,n-2,dp);
        int right=houseRob(nums,n-1,dp);
        return dp[n]=max(left,right);
    }
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n+1,-1);
        return houseRob(nums,n-1,dp);
    }
};