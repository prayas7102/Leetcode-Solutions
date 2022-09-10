class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int ans1=0,n=nums.size(),ans2=0;
        if(n==1 && !nums[0]) return 1;
        if(n==1 && nums[0]) return 0;
        for(int i=0;i<nums.size();i++){
            ans1^=nums[i];
        }
        for(int i=0;i<=n;i++){
            ans2^=i;
        }
        int ans=ans1^ans2;
        return ans;
        // if(ans) return ans;
        // return nums.size();
    }
};