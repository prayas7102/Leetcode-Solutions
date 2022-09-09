class Solution {
public:
    bool fnc(int mid, vector<int> w,int days){
        int n=w.size();
        int sum=0;
        int day=1;
            for(int i=0;i<n;i++){
                sum+=w[i];
                if(sum>mid) {sum=w[i];day++;}
            }
        return day<=days;
    }
    
    int shipWithinDays(vector<int>& w, int days) {
        int low=*max_element(w.begin(),w.end());
        int high=accumulate(w.begin(),w.end(),0);
        // sort(w.begin(),w.end());
        int ans;
        while(low<=high){
            int mid=(low+high)/2;
            if(fnc(mid,w,days)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};