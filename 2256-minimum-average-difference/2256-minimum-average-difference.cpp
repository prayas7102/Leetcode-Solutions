class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        long long int leftSum=0, rightSum=accumulate(nums.begin(),nums.end(),0L);
        long long l=1,r=nums.size()-1;
        pair<long long,long long> m;
        m.first=INT_MAX;
        m.second=INT_MAX;
        for(auto a:nums){
            leftSum+=a;
            rightSum-=a;
            
            long long avg=0;
            if(l){avg+=leftSum/l;}
            if(r) avg-=rightSum/r;
            // cout<<avg<<l-1<<endl;
            
            if(avg<0)avg*=-1;
            if(avg<m.first){
                m.first=avg;
                m.second=l-1;
            }
            
            l++;r--;
        }
        return m.second;
    }
};