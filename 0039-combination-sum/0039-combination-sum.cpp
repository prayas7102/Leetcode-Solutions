class Solution {
    void Combination(int index,vector<int> arr, vector<int> output,vector<vector<int>> &ans, int target){
        if(index>=arr.size()){
            if(0==target){
                ans.push_back(output);
            }  
            return;
        }
       
        if(arr[index]<=target){
            output.push_back(arr[index]);
            Combination(index,arr,output,ans,target-arr[index]); 
            output.pop_back();
        }
        Combination(index+1,arr,output,ans,target);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> output;
        int index=0, sum=0;
        Combination(index,candidates,output,ans,target);
        return ans;
    }
};