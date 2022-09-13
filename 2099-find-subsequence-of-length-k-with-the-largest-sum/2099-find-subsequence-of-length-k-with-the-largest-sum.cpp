class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<int> sorted=nums;
        unordered_map<int,int> m;
        sort(sorted.begin(),sorted.end(),greater<int>());
        vector<int> ans;
        sorted.resize(k);
        for(auto i:sorted){
            m[i]++;
            // cout<<m[i]<<i<<endl;
        }
        for(auto i:nums){
           if(m[i]!=0){
               ans.push_back(i);
               m[i]--;
           }
        }
        return ans;
    }
};