class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int sum=0,n=nums.size();
        for(int i=0;i<32;i++){
            int one=0,zero=0;
            int l=1<<i;
            for(int j=0;j<nums.size();j++){
                (nums[j] & l)? one++ : zero++;
            }
            if(one==n || zero==n) continue;
            sum+=one*zero;
        }
        return sum;
    }
};
// 0100
// 1110
// 0010