

// note this is not a optimize solution it does not pass all the test cases it optimize way by dynamic progrmamming


class Solution {
public:
    int climbStairs(int n) {
        if(n < 0){
            return 0;
        } 
        if(n == 0) return 1;
        
        int ans = climbStairs(n-1) + climbStairs(n-2);
        return ans;
    }
};
