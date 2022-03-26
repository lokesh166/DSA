class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        
        for(int i=0; i<row; i++){
            int s = 0;
            int e = col - 1;
            int mid;
            
            while(s <= e){
                mid = s + ((e - s)/2);
                if(matrix[i][mid] == target){
                    return true;
                }else if(matrix[i][mid] > target){
                    e = mid - 1;
                }else{
                    s = mid + 1;
                }
            }
        }
        return false;
    }
};
