class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if(nums.size()==1) return nums;
        unordered_map<int,int> m;
        for(auto a:nums){
            m[a]++;
        }
        vector<pair<int,int>> m1;
        vector<int> num;
        for(auto a:m){
            m1.push_back(make_pair(a.second,a.first));
        }
        sort(m1.begin(),m1.end());
        for(int i=m1.size()-1;i>=0;i--){
            if(k) num.push_back(m1[i].second);
            else break;
            k--;
        }
        return num;
    }
};