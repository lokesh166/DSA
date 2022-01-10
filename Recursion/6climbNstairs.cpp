// the optimized way to solve this problem is DP



int countDistinctWayToClimbStair(long long nStairs)
{
    //  Write your code here.
    
//     base case
    if(nStairs < 0) return 0;
    
    if(nStairs == 0) return 1;
    
    int ans = countDistinctWayToClimbStair(nStairs-1) + 
        countDistinctWayToClimbStair(nStairs-2);
    
    return ans;
}
