class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        
        int firstOccurance = -1;
        int lastOccurance = -1;
        int start = 0;
        int end = nums.size()-1;
        
        while(start <= end){
            int mid = start + ((end - start)/2);
            
            if(nums[mid] == target){
                firstOccurance = mid;
                end = mid-1;
            }else if(nums[mid] > target){
                end = mid-1;
            }else{
                start = mid+1;
            }
        }
        start = 0;
        end = nums.size()-1;
        while(start <= end){
            int mid = start + ((end - start)/2);
            
            if(nums[mid] == target){
                lastOccurance = mid;
                start = mid+1;
            }else if(nums[mid] > target){
                end = mid-1;
            }else{
                start = mid+1;
            }
        }
        ans.push_back(firstOccurance);
        ans.push_back(lastOccurance);
        return ans;
        
    }
};
