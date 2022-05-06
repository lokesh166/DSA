class Solution {
public:
    bool canJump(vector<int>& nums) {
         int curr_max = nums[0];
        for(size_t i = 1; i < nums.size(); i++) {
            if(curr_max == 0) return false;
            curr_max = max(curr_max - 1, nums[i]);
        }
        
        return true;
    }
};
