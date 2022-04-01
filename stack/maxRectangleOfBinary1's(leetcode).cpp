class Solution {
   
private:
    vector<int> nextSmallerElement(vector<int> &arr, int n){
        
        stack<int> s;
        vector<int> ans(n);

        s.push(-1);

        for(int i=n-1; i>=0; i--){
            int temp = arr[i];

            while(s.top() != -1 && arr[s.top()] >= temp){
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }
    
    
    vector<int> prevSmallerElement(vector<int> &arr, int n){
        
        stack<int> s;
        vector<int> ans(n);

        s.push(-1);

        for(int i=0; i<n; i++){
            int temp = arr[i];

            while(s.top() != -1 && arr[s.top()] >= temp){
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }
    
     int largestRectangleArea(vector<int> heights) {
        int n = heights.size();
        
        vector<int> next(n);
        next = nextSmallerElement(heights, n);
        
        vector<int> prev(n);
        prev = prevSmallerElement(heights, n);
        int area = INT_MIN;
        
        for(int i=0; i<n; i++){
            int l = heights[i];
           
            
            if(next[i] == -1){
                next[i] = n;
            }
            int b = next[i] - prev[i] - 1;
            
            int newArea = l * b;
            area = max(area, newArea);
        }
        
        return area;
    }
    
    
    
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        
        if(matrix.empty()){
            return 0;
        }
        
        int n = matrix.size(); 
        int m = matrix[0].size();
        int ans = 0;
        
       
        vector<int> dp(m, 0);
        
        for(int i=m-1; i>=0; i--){
            dp[i] = matrix[n-1][i] - '0';
        }
        
        ans = largestRectangleArea(dp);
        
            
        for(int i=n-2; i>=0; i--){
            for(int j=m-1; j>=0; j--){
                if(matrix[i][j] != '0')
                    dp[j] = dp[j] + 1;
                else
                    dp[j] = 0;
            }
            int newArea = largestRectangleArea(dp);
            ans = max(ans, newArea);
        }
        
        return ans;
    }

};
