class Solution {
    
    unsigned long long printBinary(long long n)
    {
        unsigned long long s=0;
	    for (long long i = 32; i >= 0; i--)
	    {   
		    unsigned long long k = (n >> i) & 1;
		    s+=k*pow(2,31-i);
	    }
        return s;
    }
public:
    uint32_t reverseBits(uint32_t n) {
        return printBinary(n);
    }
};