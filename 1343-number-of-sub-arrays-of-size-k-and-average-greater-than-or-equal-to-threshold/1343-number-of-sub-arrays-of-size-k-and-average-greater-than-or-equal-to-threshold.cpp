class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int t) {
        int n=arr.size(),rem=0,sum=0,count=0;
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
        count+=(sum/k>=t)?1:0;
        for(int i=k;i<n;i++){
                sum-=arr[rem];
                rem++;
                sum+=arr[i];
                count+=(sum/k>=t)?1:0;
        }
        return count;
    }
};