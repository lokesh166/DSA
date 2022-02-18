vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==NULL)
        return {};
    queue<TreeNode*> q;
    vector<vector<int>> ans;
    q.push(root);
    while(q.size()){
        vector<int> temp;
        int count=q.size();
        while(count){
            TreeNode* front=q.front();
            q.pop();
            temp.push_back(front->val);
            if(front->left)
                q.push(front->left);
            if(front->right)
                q.push(front->right);
            count--;
        }
        ans.push_back(temp);
    }
    return ans;
    }
};
