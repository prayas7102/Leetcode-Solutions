class Solution {
public:
    bool closeStrings(string w1, string w2) {
        vector<int> v1(26,0), v2(26,0), v11(26,0), v22(26,0);
        for(auto &a:w1) v1[a-'a']++, v11[a-'a']=1;
        for(auto &a:w2) v2[a-'a']++, v22[a-'a']=1;
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());     
        return v1==v2 && v22==v11;
    }
};