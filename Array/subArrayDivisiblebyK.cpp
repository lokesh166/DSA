// brute forse approace 


class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int ans = 0;
       
        int n = nums.size();
        
        for(int i=0; i<n; i++) {
            int curr = 0;
            for(int j=i; j<n; j++) {
                curr += nums[j];
                
                if(curr % k == 0) {
                    ans++;
                }
            }
        }
        return ans;
    }
};


