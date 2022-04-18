// left view

void solve(Node* root, vector<int> &ans , int level){
        if(root == NULL){
            return ;
        }
        
        if(level == ans.size()){
            ans.push_back(root->data);
        }
        
        solve(root->left, ans, level+1);
        solve(root->right, ans, level+1);
        
    }

vector<int> leftView(Node *root)
{
        vector<int> ans;
        
        solve(root, ans, 0);
        return ans;
}


// right view

class Solution {
public:
    
    void solve(TreeNode* root, vector<int> &ans , int level){
        if(root == NULL){
            return ;
        }
        
        if(level == ans.size()){
            ans.push_back(root->val);
        }
        
        solve(root->right, ans, level+1);
        solve(root->left, ans, level+1);
    }
    
    vector<int> rightSideView(TreeNode* root) {
        
        vector<int> ans;
        
        solve(root, ans, 0);
        return ans;
        
    }
};






// top view of the binary tree


class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
       vector<int> ans;
       queue<pair<int, Node*>> q;
       map<int, int> mp;
       
       q.push({0, root});
       
       while(!q.empty()){
           auto p = q.front();
           q.pop();
           
           int index = p.first;
           Node* node = p.second;
           
           if(mp.find(index) == mp.end()){
               mp[index] = node->data;
           }
           
           if(node->left) q.push({index-1, node->left});
           
           if(node->right) q.push({index+1, node->right});
       }
       for(auto it: mp){
           ans.push_back(it.second);
       }
       return ans;
    }

};
