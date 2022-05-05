class Solution {
public:
    int maxProduct(vector<int>& nums) {
        long long prod = 1;
        long long maxProd = INT_MIN;
        int n = nums.size();
        for(int i=0; i<n; i++)
        {
            prod *= nums[i];
            maxProd = max(prod, maxProd);
            if(prod == 0)
                prod = 1;
        }
        
        prod = 1;
        for(int i=n-1; i>=0; i--)
        {
            prod *= nums[i];
            maxProd = max(prod, maxProd);
            if(prod == 0)
                prod = 1;
        }
        
        return maxProd;
    }
};
