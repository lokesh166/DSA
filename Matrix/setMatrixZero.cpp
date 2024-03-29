// approace 1 

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size(); int n = matrix[0].size();
        
        vector<pair<int,int>> temp;
        
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(matrix[i][j] == 0) temp.push_back({i,j});
            }
        }
      
        for(int i=0; i<temp.size(); i++) {
            int row = temp[i].first;
            int col = temp[i].second;
            
            for(int i=0; i<n; i++) {
                matrix[row][i] = 0;
            }
            
            for(int i=0; i<m; i++) {
                matrix[i][col] = 0;
            }
        }
    }
};






// approace 2


class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
         int m=matrix.size(), n=matrix[0].size();
        
        bool col=true, row=true;   
        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++)
                if(matrix[i][j]==0){
                    if(i==0)
                        row = false;
                    if(j==0)
                        col = false;
                    matrix[0][j]=0;
                    matrix[i][0]=0;
                }
            
        for(int i=1; i<m; i++)
            for(int j=1; j<n; j++)
                if(matrix[0][j]==0 || matrix[i][0]==0)
                    matrix[i][j]=0;
        
        if(col==false)
            for(int i=0; i<m; i++)
                matrix[i][0]=0;
         if(row==false)
            for(int j=0; j<n; j++)
                matrix[0][j]=0;
    }
};
