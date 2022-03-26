class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
     
        int n = grid.size();
        int m = grid[0].size();
        int count = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] < 0) count++;
            }
        }
        return count;
    }
};








// optimized solution


class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        int count = 0;
        int ans = col;
            
            
        for(int i=0; i<row; i++){
            int s = 0;
            int e = col-1;
            int mid;
            
            while(s <= e){
                mid = s + ((e - s)/2);
                
                if(grid[i][mid] < 0){
                    ans = mid;
                    e = mid - 1;
                }else{
                    s = mid + 1;
                }
            }
            count += (col - ans);
            ans = col;
        }
        return count;
    }
};
