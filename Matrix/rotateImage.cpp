class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i=0; i<n; i++) {
            
//             for transpose the matrix
            for(int j=0; j<i; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
            
        }
        
            // reverse the row one by one
            for(int j=0; j<n; j++) {
                reverse(matrix[j].begin(), matrix[j].end());
            }
    }
};
