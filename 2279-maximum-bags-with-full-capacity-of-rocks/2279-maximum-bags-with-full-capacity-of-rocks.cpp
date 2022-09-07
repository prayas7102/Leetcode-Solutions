class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int l) {
        // if(l>=capacity.size()) return capacity.size();
        vector<int> diff;
        for(int i=0;i<rocks.size();i++){
            diff.push_back(capacity[i]-rocks[i]);
        }
        sort(diff.begin(),diff.end());
        int ans=0;
        for(int i=0;i<diff.size();i++){
            if(l-diff[i]>=0 && diff[i]>0){
                ans++;
                l-=diff[i];
            }
            else if(diff[i]==0) ans++;
        }
        return ans;
    }
};