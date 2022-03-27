class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
    for(int count=1;count<nums.size();++count)
        {
            nums[count]=nums[count]+nums[count-1];
        }
        return nums;
    }
};
