#include <string>
#include <cstdlib>

class Solution {
    
public:
    string addBinary(string a, string b) {
        int i=a.length(), j=b.length(),carry=0,sum;
        string res = "";
        while(i>0||j>0||carry>0){
            sum=0;
            sum+= (--i>=0)?a[i]-'0':0;
            sum+= (--j>=0)?b[j]-'0':0;
            res+= to_string((sum+carry)%2);
            carry=((sum+carry)>=2)?1:0;   
        }
        reverse(res.begin(),res.end());
        return res;
    }
};

 // while( (i>0||j>0) || carry ){
 //            sum = 0;
 //            sum += --i>=0?a[i]-'0':0;
 //            sum += --j>=0?b[j]-'0':0;
 //            res    += (sum+carry)%2 +'0';
 //            carry   = (sum+carry)>=2;
 //        }