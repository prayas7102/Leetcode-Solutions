class Solution {
public:
    int minimizedMaximum(int n, vector<int>& q) {
       int l=1,h=*max_element(q.begin(),q.end());
        int ans=h;
        while(l<=h){
            int mid=(l+h)/2;
            int sum=0;
            for(auto a:q){
                sum+=a/mid;
                if (a%mid) sum++;
            }
            (sum<=n)?h=mid-1,ans=mid:l=mid+1;
        }
        return ans;
    }
};