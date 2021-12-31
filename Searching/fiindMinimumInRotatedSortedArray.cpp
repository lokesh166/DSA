class Solution {
public:
    int findMin(vector<int>& nums) {
       int left=0;
        int right=nums.size()-1;
        while(left<right){
            int mid=(left+right)/2;
            if(mid>0 && nums[mid]<nums[mid-1] && nums[mid]<nums[mid+1] ){
                return nums[mid];
            }
            else if(nums[mid]>nums[right]){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return nums[left];
    }
};






















class Solution {
public:
    int findMin(vector<int>& nums) {
        if (nums.size() == 1){
            return nums[0];
        }
        int start = 0;
        
        int n = nums.size();
        int end = nums.size()-1;
        
        if(nums[start] < nums[end]) return nums[start];
        
        while(start <= end){
            int mid = start + (end - start)/2;
            int pre = (mid + n -1)% n;
            int next = (mid+1)%n;
            if((nums[mid] < nums[pre]) & (nums[mid] < nums[next])){
                return nums[mid];
            }
            if((nums[mid] >= nums[start]) & (nums[mid] <= nums[end])){
                end = mid-1;
            }
            else if(nums[mid] >= nums[start]){
                start = mid+1;
            }
            else if(nums[mid] <= nums[end]){
                end = mid-1;
            }
        }
        return -1;
    }
};
