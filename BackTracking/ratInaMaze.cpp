class Solution{
    
    private:
    
    bool isSafe(int newX, int newY, vector<vector<int>> &arr, vector<vector<bool>> &visited, int n){
        if( ((newX >= 0 && newX < n) && (newY >= 0 && newY < n) ) && (visited[newX][newY] != 1) && (arr[newX][newY] == 1)){
            return true;
        }else{
            return false;
        }
    }
    
    void solve(int x, int y, vector<vector<int>> &arr, int n, vector<vector<bool>> &visited, vector<string> &ans, string path){
        // base case (jab pauch jayu to ans me store kara lene)
        if(x == n-1 && y == n-1){
            ans.push_back(path);
            return ;
        }
        
//  4 movement D L R U
        
        visited[x][y] = 1; 
        // Down movement 
        if(isSafe(x+1, y, arr, visited, n)){
            solve(x+1, y, arr, n, visited, ans, path + 'D');
        }
        
        // Left Movement
        if(isSafe(x, y-1, arr, visited, n)){
            solve(x, y-1, arr, n, visited, ans, path + 'L');
        }
        
        // Right movement
        if(isSafe(x, y+1, arr, visited, n)){
            solve(x, y+1, arr, n, visited, ans, path + 'R');
        }
        
        if(isSafe(x-1, y, arr, visited, n)){
            solve(x-1, y, arr, n, visited, ans, path + 'U');
        }
        
        visited[x][y] = 0;
    }
    
    
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> ans;
        if(m[0][0] == 0) {
            return ans;
        }
        
        vector<vector<bool>> visited(n, vector<bool>(n, 0));
        string path = "";
        
        solve(0, 0, m, n, visited, ans, path);
        return ans;
    }
};
