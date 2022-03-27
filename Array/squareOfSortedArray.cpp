class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans(nums.size());
        int s = 0;
        int e = nums.size() - 1;
        int k = nums.size() - 1;
        
        while(s <= e){
            if(abs(nums[s]) > abs(nums[e])){
               ans[k--] = nums[s] * nums[s];
                s++;
                
            }else{
                ans[k--] = nums[e] * nums[e];
                e--;
            }
        }
        return ans;
    }
};
