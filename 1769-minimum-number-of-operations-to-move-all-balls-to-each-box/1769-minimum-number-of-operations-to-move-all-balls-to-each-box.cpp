class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.length();
        vector<int> v(n);
        int a=0,b=0;
        for(int i=0;i<n;i++){
            if(boxes[i]=='1') {a++;v[0]+=i;}
        }
        if(boxes[0]=='1') {a--;b++;}
        for(int i=1;i<n;i++){
            v[i]+=v[i-1]-a+b;
            if(boxes[i]=='1') {a--;b++;}
        }
        return v;
    }
};