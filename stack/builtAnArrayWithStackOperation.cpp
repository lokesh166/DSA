class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        
        
        int i = 0, j = 1;
        
        while(i <= target.size()-1){
            if(target[i] == j){
                ans.push_back("Push");
                i++;
                j++;
            }else{
                ans.push_back("Push");
                ans.push_back("Pop");
                j++;
            }
            
        }
        
        return ans;
    }
};
