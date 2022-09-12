class Solution {
    int determineBit(int n, int pos)
{
	int x = (n & (1 << pos)) != 0;
	return x ;
}
    
  public:
    int singleNumber(vector < int > & nums) {
      vector < int > v(32,0);
      int n=nums.size();
      for (int i = 0; i < 32; i++) {
        int sum = 0;
          for (int j = 0; j < n; j++) {
            if (determineBit(nums[j], i)) {
              sum++;
            }
          v[i]=(sum)%3;
        }
      }
       unsigned long long sum=0;
      for (int i = 0; i < v.size(); i++) {
        sum+=v[i]*pow(2,i);
      }
        return sum;
    }
};