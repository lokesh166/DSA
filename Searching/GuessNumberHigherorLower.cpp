/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long start = 1;
        long end = n;
        long mid;
        long ans;
        
        while(start <= end)
        {
            mid = (start + end) / 2;
            if(guess(mid) == 0)
            {
                ans = mid;
                break;
            }
            else if(guess(mid) == -1)
            {
                end = mid - 1;
            }
            else if(guess(mid) == 1)
            {
                start = mid + 1;
            }
        }
        return ans;
    }
};
