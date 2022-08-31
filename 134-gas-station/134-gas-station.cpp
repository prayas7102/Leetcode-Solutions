class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int balance=0,start=0,deficit=0;
        for(int i=0;i<gas.size();i++){
            balance+=gas[i]-cost[i];
            if(balance<0){
                start=i+1;
                deficit+=balance;
                balance=0;
            }
        }
        if(deficit+balance<0) return -1;
        return start;
    }
};