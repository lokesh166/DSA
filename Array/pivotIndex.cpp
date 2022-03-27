class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int right = 0;
        int left = 0;
        for(int i=0; i<n; i++){
            right += nums[i];
        }
        for(int i=0; i<n; i++){
            right -= nums[i];
            if(right == left){
                return i;   
            }
            left += nums[i];
        }
        return -1;
    }
};
