// not finding on leetcode ans gfg

 */
class Solution {
public:
    
    bool solve(TreeNode* root, int x, vector<int> &ans){
        
        if(root == NULL) return false;
        
//         if we find the node which is equal to x
        if(root->val == x) return true;
        
        ans.push_back(root->val);
        
//         if node is not equal to null
        if((root->left, x, ans) || (root->right, x, ans)){
            return true;
        }
        
//         node is null
        ans.pop();
        return false;
    }
    
    
    
    vector<vector> rootToNodePath(TreeNode* root, int x) {
        
        vector<int> ans;
        
        if(root == NULL) return ans;
        
        solve(root, x, ans);
        return ans;
    }
};
