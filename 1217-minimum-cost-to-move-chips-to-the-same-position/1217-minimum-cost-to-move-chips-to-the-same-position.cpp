class Solution {
public:
    int minCostToMoveChips(vector<int>& pos) {
        int even=0,odd=0;
        for(int i=0;i<pos.size();i++){
            !(pos[i]%2)? even++:odd++;
        }
        
        return min(even,odd);
    }
};