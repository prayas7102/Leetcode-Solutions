class Solution {
    int noOfOnes(int n)
{
	int count = 0;
	while (n)
	{
		count++;
		n = n & (n - 1);
	}
	return count;
}
public:
    vector<int> countBits(int n) {
        vector<int> v(n+1,0);
        for(int i=0;i<n+1;i++){
            v[i]=noOfOnes(i);
        }
        return v;
    }
};