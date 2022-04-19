/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    void solve(TreeNode* root, vector<string> &ans, string s){
        if(root == NULL) return ;
        
        if(root->left == NULL && root->right == NULL){
            ans.push_back(s);
        } 
        
        string s1 = s;
        string s2 = s;
        
        if(root->left){
            s1 = s1 + "->" + to_string(root->left->val);
            solve(root->left, ans, s1);
        }
        
        if(root->right){
            s2 = s2 + "->" + to_string(root->right->val);
            solve(root->right, ans, s2);
        }
    }
    
    
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string s = to_string(root->val);
        solve(root, ans, s);
        return ans;
    }
};
