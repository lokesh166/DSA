// appproace 1


class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        for(int i=0; i<n; i++) {
            sum += nums[i];
        }
        
        int originalSum = (n*(n+1)) / 2;
        
        return originalSum - sum;
    }
};





// approace 2


class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        for(int i=0; i<=n; i++) {
            sum += i;
        }
        
       for(int i=0; i<n; i++) {
           sum -= nums[i];
       }
        return sum;
    }
};
