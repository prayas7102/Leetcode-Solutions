class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int> m;
        int c=0;
        for(auto a:tasks){
            m[a]++;
        }
        for(auto a:m){
            int k=a.second;
            if(k==1) return -1;
            c+=(k+2)/3;
        }
        return c;
    }
};
