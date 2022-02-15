/************************************************************

    Following is the TreeNode class structure:

    template <typename T>

    class TreeNode {
    public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;
        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
#include<bits/stdc++.h>
vector<int> reverseLevelOrder(TreeNode<int> *root){
    vector<int> ans;
    
    if(root == NULL){
        return ans;
    }
    
    queue<TreeNode<int>* > q;
    
    q.push(root);
    
    while(!q.empty()){
        TreeNode<int>* temp = q.front();
        
        ans.push_back(temp -> val);
        q.pop();
        
        if(temp -> left){
            q.push(temp -> left);
        }
        
        if(temp -> right){
            q.push(temp -> right);
        }
    }
    reverse(ans.begin(),ans.end());

   return ans;
    
    
}
