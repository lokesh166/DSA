// not optimized 
class Solution {
    
private:
    
    bool isSafe(int row, int col, vector<string> &board, int n){
//         check for upper direction (diagonal)
        int conRow = row;
        int conCol = col;
        
        while(conRow >= 0 && conCol >= 0){
            if(board[conRow][conCol] == 'Q') return false;
            conRow--;
            conCol--;
        }
        
//         for checking backward direction
        conRow = row;
        conCol = col;
        
        while(conCol >= 0){
            if(board[conRow][conCol] == 'Q') return false;
            conCol--;
        }
        
//         check for dowm direction (diagonal)
        conRow = row;
        conCol = col;
        
        while(conRow < n && conCol >= 0){
            if(board[conRow][conCol] == 'Q') return false;
            conRow++;
            conCol--;
        }
        
        return true;
    }
    
    
    void solve(int col, vector<string> &board, vector<vector<string>> &ans, int n){
//         base case 
        if(col == n){
            ans.push_back(board);
            return ;
        }
        
        for(int row=0; row<n; row++){
            if(isSafe(row, col, board, n)){
                board[row][col] = 'Q';
                solve(col+1, board, ans, n);
                board[row][col] = '.';
            }
        }
    }
    
    
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n, '.');
        
        for(int i=0; i<n; i++){
            board[i] = s;
        } 
        
        solve(0, board, ans, n);
        return ans;
    }
};




// optimized way 


class Solution {

public: 
    void solve(int col, vector<string> &board, vector<vector<string>> &ans, 
               vector<int> &leftRow, 
               vector<int> &upperDiagonal, vector<int> &lowerDiagonal, int n) {
        if(col == n) {
            ans.push_back(board); 
            return; 
        }
    
        
        for(int row = 0;row<n;row++) {
            if(leftRow[row]==0 && lowerDiagonal[row + col] == 0 
               && upperDiagonal[n-1 + col - row] == 0) {
                
                board[row][col] = 'Q'; 
                leftRow[row] = 1; 
                lowerDiagonal[row+col] = 1; 
                upperDiagonal[n-1 + col - row] = 1;
                solve(col+1, board, ans, leftRow, upperDiagonal, lowerDiagonal, n); 
                board[row][col] = '.'; 
                leftRow[row] = 0; 
                lowerDiagonal[row+col] = 0; 
                upperDiagonal[n-1 + col - row] = 0;
            }
        }
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans; 
        vector<string> board(n);
        string s(n, '.'); 
        for(int i = 0;i<n;i++) {
            board[i] = s; 
        }
        vector<int> leftRow(n, 0), upperDiagonal(2 * n - 1, 0), lowerDiagonal(2 * n - 1, 0); 
        solve(0,board, ans, leftRow, upperDiagonal, lowerDiagonal, n); 
        return ans; 
    }
    
};
