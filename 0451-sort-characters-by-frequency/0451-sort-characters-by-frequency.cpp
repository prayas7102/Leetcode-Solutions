class Solution {
public:
    string frequencySort(string s) {
        map<char,int> m;
        vector<pair<int,char>> m1;
        for(int i=0;i<s.length();i++){
            m[s[i]]++;
        }
        for(auto a:m){
            m1.push_back(make_pair(a.second,a.first));
        }
        sort(m1.begin(),m1.end());
        s="";
        for(auto a:m1){
            int i=a.first;
            while(i--) s+=(a.second);
        }
        reverse(s.begin(),s.end());
        return s;
    }
};