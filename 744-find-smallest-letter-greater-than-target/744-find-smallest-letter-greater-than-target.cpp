class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int x=target-'0';
        for(auto a:letters){
            if(x<(a-'0')) return a;
        }
        return letters[0];
    }
};