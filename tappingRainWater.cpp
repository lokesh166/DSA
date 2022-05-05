// approcace 1 space o(n)

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> left(n);
        vector<int> right(n);
        
//         fill the left boundary 
        left[0] = height[0];
        for(int i=1; i<n; i++) {
            left[i] = max(left[i-1], height[i]);
        }
        
//         fill the right boundary
        right[n-1] = height[n-1];
        for(int i=n-2; i>=0; i--) {
            right[i] = max(right[i+1], height[i]);
        }
        
        int ans = 0;
        
        for(int i=0; i<n; i++) {
            ans += min(left[i], right[i]) - height[i];
        }
        
        return ans;
    }
};



// optimal approace


int n = height.size(); 
        int left=0; int right=n-1;
        int res=0;
        int maxleft=0, maxright=0;
        
        while(left<=right){
            
            if(height[left]<=height[right]){

                if(height[left]>=maxleft) maxleft=height[left];
                else res+=maxleft-height[left];
                
                left++;
            }
            else{

                if(height[right]>=maxright) maxright= height[right];
                else res+=maxright-height[right];
                
                right--;
            }
        }
        return res;
