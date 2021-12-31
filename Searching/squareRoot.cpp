class Solution {
public:
    int mySqrt(int x) {
        long left = 1;
        long right = x;
        while (left <= right) {
            long mid = (left + right) / 2;
            if (x > (mid * mid))
                left = mid + 1;
            else if (x < mid * mid)
                right = mid - 1;
            else 
                return mid;
        }
        
        return right;
    }
};
