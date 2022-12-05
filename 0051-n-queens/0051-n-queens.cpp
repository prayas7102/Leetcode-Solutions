class Solution {
    void solve(int col, vector<string> &board, vector<vector<string>> &ans, vector<int> &left, vector<int> &upperDiag, vector<int> &lowerDiag, int n){
        if(col==n){ans.push_back(board);return;}
        
        for(int row=0;row<n;row++){
            if(!left[row] && !lowerDiag[row+col] && !upperDiag[n-1+col-row]){
                board[row][col]='Q';
                left[row]=1;
                lowerDiag[row+col]=1;
                upperDiag[n-1+col-row]=1;
                solve(col+1,board,ans,left,upperDiag, lowerDiag,n);
                board[row][col]='.';
                left[row]=0;
                lowerDiag[row+col]=0;
                upperDiag[n-1+col-row]=0;
            }
        }
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        string s(n,'.');
        vector<string> board(n,s);
        vector<int> left(n,0),upperDiag(2*n-1,0),lowerDiag(2*n-1,0);
        solve(0,board,ans,left,upperDiag, lowerDiag,n);
        return ans;
    }
};