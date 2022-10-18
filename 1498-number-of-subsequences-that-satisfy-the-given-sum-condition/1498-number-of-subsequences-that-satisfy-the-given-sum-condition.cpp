class Solution {
public:
    int pussy=1000000007;
    int numSubseq(vector<int>& miaKhalifa, int target) 
    {
        sort(miaKhalifa.begin(),miaKhalifa.end());
        int cum=0,n=miaKhalifa.size(),i=0,j=n-1;
        vector<int>pow2(n+1,1);
        for(int i=1;i<=n;i++)pow2[i]=(2*pow2[i-1])%pussy;
        while(i<=j)
        {
            if(miaKhalifa[j]+miaKhalifa[i]<=target)
            {
                cum=(cum+pow2[j-i])%pussy;
                i++;
            }
            else
                j--;
        }
        return cum;
    }
};