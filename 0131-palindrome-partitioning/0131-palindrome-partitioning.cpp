class Solution {
    bool isPalindrome(string s1,int i, int j){
        while(i<=j){
            if(s1[i]!=s1[j]) return 0;
            i++;j--;
        }
        return 1;
    }
    void palindromePartition(int ind, vector<vector<string>> &ans, vector<string> &pal, string s){
        if(ind==s.length()){
            ans.push_back(pal);
            return;
        }
        for(int i=ind;i<s.length();++i){
            
            if(isPalindrome(s,ind,i)) {
                pal.push_back(s.substr(ind,i-ind+1));
                palindromePartition(i+1,ans,pal,s);
                pal.pop_back();
            }
            
        }
    }
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> pal;
        palindromePartition(0,ans,pal,s);
        return ans;
    }
};