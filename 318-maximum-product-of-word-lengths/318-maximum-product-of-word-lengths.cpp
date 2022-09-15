class Solution {
public:
    int maxProduct(vector<string>& words) {
        int n=words.size();
        vector<int> v;
        for(int i=0;i<n;i++){
            int mask=0;
            for(int j=0;j<words[i].size();j++){
                int pos=words[i][j]-'a';
                mask |= (1<<(pos));
            }
            // cout<<mask<<endl;
            v.push_back(mask);
        }
        int maxi=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if((v[i]&v[j])==0) {
                    int prod = words[i].size()*words[j].size();
                    maxi = max(maxi, prod);
                }
            }
        }
        return maxi;
    }
};