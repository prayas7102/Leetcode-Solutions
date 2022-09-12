class Solution {
public:
    bool hasAlternatingBits(int n) {
         int current=(n&1);
        int before=current;
        n=n>>1;
        while(n!=0)
        {
            current=(n&1);
            if(current==before)
                return false;
            else
                before=current;
            
            n=n>>1;
        }
        return true;
    }
};