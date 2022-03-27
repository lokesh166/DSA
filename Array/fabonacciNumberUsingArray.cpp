class Solution {
public:
    int fib(int n) {
        vector<int> ans;
        
        ans.push_back(0);
        ans.push_back(1);
        
        int i=1;
         while(i<=n)
        {
            int sum = ans[i] + ans[i-1];
            i++;
            ans.push_back(sum);  
        }
       
    return ans[n];
        
    }
};
