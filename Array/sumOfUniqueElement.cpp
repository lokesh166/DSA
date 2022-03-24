class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            int total=count(nums.begin(),nums.end(),nums[i]);
                if(total==1)
                {
                sum+=nums[i];
                }
        }
        return sum;
    }
};
