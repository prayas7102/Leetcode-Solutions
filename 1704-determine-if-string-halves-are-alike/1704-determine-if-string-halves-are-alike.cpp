class Solution {
public:
    bool halvesAreAlike(string s) {
        vector<int> m{'a','e','i','o','u','A','E','I','O','U'};
        vector<int> arr(1000,0);
        int left=0,right=0,n=s.length(),i=0;
        for(auto a:m){
            arr[a]=1;
        }
        for(auto &a:s){
            // cout<<a<<arr[a]<<endl;
            if(arr[int(a)]){
                
                if(i<n/2) {left++;}
                else right++;
            }
            i++;
        }
        // cout<<left<<right;
        return left==right;
    }
};