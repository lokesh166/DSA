class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int a = 0;
        int b = 0;
        for( int i=0; i<nums.size()-1; i++ ){
            for( int j=i+1; j<nums.size(); j++ ){
                if(nums[i]+nums[j] == target){
                    a = i;
                    b = j;
                }
            }
        }
        return {a,b};
    }
};









// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

 

// Example 1:

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Output: Because nums[0] + nums[1] == 9, we return [0, 1].
// Example 2:

// Input: nums = [3,2,4], target = 6
// Output: [1,2]
// Example 3:

// Input: nums = [3,3], target = 6
// Output: [0,1]
















class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         map<int, vector<int>>mp;
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]].push_back(i);
        }
        sort(nums.begin(), nums.end());
        
        int i = 0, j = nums.size()-1;
        while(i < j){
            int sum = nums[i]+nums[j];
            if(target == sum){
                if(nums[i] == nums[j]){
                    ans.push_back(mp[nums[i]][0]);
                    ans.push_back(mp[nums[j]][1]);
                }
                else{
                    ans.push_back(mp[nums[i]][0]);
                    ans.push_back(mp[nums[j]][0]);
                }
                break;
            }
            else if(target < sum){
                j--;
            }
            else{
                i++;
            }
        }
     
        return ans;
    }
};
