class Solution {
public:

    vector<vector<string>> res;
    bool isValid(int n,int i, int j, vector<string>& temp){
        for(int a=i-1,b=j-1;a>=0&&b>=0;a--,b--){
            if(temp[a][b]=='Q'){
                return false;
            }
        }
        for(int a=i-1,b=j+1;a>=0&&b<n;a--,b++){
            if(temp[a][b]=='Q'){
                return false;
            }
        }
        for(int a=0;a<i;a++){
            if(temp[a][j]=='Q'){
                return false;
            }
        }
        return true;
    }

    void solve(int n,int row,int col,vector<string>& temp){
        // vector<string> temp;
        if(row==n){
            res.push_back(temp);
            return;
        }
        if(isValid(n,row,col,temp)){
            temp[row][col]='Q';
            solve(n,row+1,0,temp);
            temp[row][col]='.';
        }
        if(col<n-1)
            solve(n,row,col+1,temp);
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<string> temp(n,string(n,'.'));
        
        solve(n,0,0,temp);
        return res;
    }
};