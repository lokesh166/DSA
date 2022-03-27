class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int firstprz = 0;
        int secondprz = 1;
        int total = 0;
       
        while(secondprz < prices.size()){
            if(prices[firstprz] < prices[secondprz]){
                total += (prices[secondprz++]-prices[firstprz++]);
                
            }else{
                firstprz++;
                secondprz++;
            }
        }
        return total;
    }
};
