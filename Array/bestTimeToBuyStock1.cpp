class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int pre = prices[0];
        for(int i=1; i<prices.size(); i++){
            if(prices[i] > pre){
                ans = max(ans, (prices[i]-pre));
            }else{
                pre = prices[i];
            }
        }
        return ans;
    }
};
