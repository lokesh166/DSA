class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
//         for traversing the all character of first string 
        for(int i=0; i<strs[0].length(); i++){
            char ch = strs[0][i];
            
            bool match = true;
            
//             for checking ch for rest of the string
            for(int j=1; j<strs.size(); j++){
//                 not match
                if(strs[j].size() < i || ch != strs[j][i]){
                    match = false;
                    break;
                }
            }
            if(match == false){
                break;
            }else{
                ans.push_back(ch);
            }
        }
        return ans;
    }
};
