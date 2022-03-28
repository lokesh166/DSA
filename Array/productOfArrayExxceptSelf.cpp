// not potimized solution 
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        vector<int> firstArray(n);
        vector<int> secondArray(n);
        
        firstArray[0] = 1;
        secondArray[0] = 1;
        
        for(int i=1; i<n; i++){
            firstArray[i] = firstArray[i-1] * nums[i-1];
            secondArray[i] = firstArray[i-1] * nums[n-1];
        }
        
        int j = 0;
        while(j < n){
            ans[j] = firstArray[j] * secondArray[n-j-1];
        }
        
        return ans;
    }
};







// optimized solution
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
         vector<int> result;
        int runningVal = 1;
        for(int i = 0; i < nums.size();i++)
        {
            result.push_back(runningVal);
            runningVal*=nums[i];
        }
        runningVal = nums[nums.size()-1];
        for(int i = nums.size()-2; i > -1; i--)
        {
            result[i]*=runningVal;
            runningVal*=nums[i];
        }
        return result;
    }
};



