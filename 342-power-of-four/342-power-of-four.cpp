class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0) return 0;
        int zero=0,one=0;
        while(n){
            if((n&1)==0)zero++;
            else one++;
            n=n>>1;
        }
        return one==1 && !(zero%2);
    }
};