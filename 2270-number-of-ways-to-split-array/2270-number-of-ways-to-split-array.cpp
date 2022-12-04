class Solution {
public:
    int waysToSplitArray(vector<int>& ans) {
        int k=0;
        vector<long long> nums;
        long long prev=0;
        for(int i=0;i<ans.size();i++){
            // cout<<prev+ans[i]<<endl;
            nums.push_back(prev+ans[i]);
            prev+=ans[i];
        }
        long long int s=nums[nums.size()-1];
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>=s-nums[i])k++;
        }
        return k;
    }
};