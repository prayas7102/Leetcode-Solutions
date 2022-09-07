class Solution {
    static bool cmp(vector<int> a, vector<int> b){
        if(a[1]>b[1]) return true;
        return false;
    }
public:
    int maximumUnits(vector<vector<int>>& box, int truckSize) {
        sort(box.begin(),box.end(),cmp);
        int n=0,sum=0;
        for(auto a:box){
            if(n+a[0]<=truckSize) {
                sum+=a[0]*a[1];
                n+=a[0];
            }
            else {
                sum+=a[1]*(truckSize-n);
                n+=truckSize-n;
                break;
            }
        }
        return sum;
    }
};