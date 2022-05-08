// using map 


class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m = mat.size(); int n = mat[0].size();
        
        vector<int> ans;
        
        map<int, vector<int> > mp;
        
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                mp[i+j].push_back(mat[i][j]);
            }
        }
        
        for(auto [i,j]: mp) {
            if(i%2 == 0) {
                reverse(j.begin(), j.end());
            }
            
            for(auto it:j) {
                ans.push_back(it);
            }
        }
        return ans;
    }
};









class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& a) {
        int m,n,i,j;
        
        m=a.size();
        n=a[0].size();
        i=0,j=-1;
        bool dir=1;
        vector<int> ans;
        
        while(i<m || j<n)
        {
            if(dir==1)
                j++;
            else
                i++;
            
            if(i>=m)
            {
                i--;
                j++;
            }
            else if(j>=n)
            {
                j--;
                i++;
            }
                
            while(i<m && j<n && i>=0 && j>=0)
            {
                ans.push_back(a[i][j]);
                
                if(dir)
                {
                    i--;
                    j++;
                }
                else
                {
                    i++;
                    j--;
                }
            }
            
            dir=!dir;
        }
        return ans;
    }
};
