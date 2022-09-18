class Solution {
public:
    int longestPalindrome(string str) {
        unordered_map<char,int> m;
        for(auto s:str){
            m[s]++;
        }
        int sum=0,odd=0;
        for(auto a:m){
            int k=a.second;
            if(k%2) {sum+=k-1;odd=1;}
            else sum+=k;
        }
        if(odd)sum++;
        return sum;
    }
};