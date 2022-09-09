class Solution {
public:
    long long minimumTime(vector<int>& time, int t) {
        long low=*min_element(time.begin(),time.end());
        long high=low*t;
        while(low<high){
            // cout<<low<<high<<endl;
            long long mid=((low+high)/2);
            long long sum=0;
            for(auto a:time){
                sum+=mid/a;
            }
            (sum<t)?low=mid+1:high=mid ;
            // cout<<ans<<endl;
        }
        return low;
    }
};