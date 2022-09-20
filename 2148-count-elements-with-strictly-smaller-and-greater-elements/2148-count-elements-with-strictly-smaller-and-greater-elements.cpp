class Solution {
public:
    int countElements(vector<int>& nums) {
        int n=nums.size();
        if(n<=2) return 0;
        sort(nums.begin(),nums.end());
        int x=0, low=nums[0],high=nums[n-1];
        for(auto a:nums){
            if(a==low || a==high) x++; 
        }
        x-=2;
        return n-2-x;
    }
};