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
    int hammingDistance(int x, int y) {
        return noOfOnes(x^y);
    }
};