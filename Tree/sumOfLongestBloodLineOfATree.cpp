class Solution
{
    
    void solve(Node* root, int sum, int &maxSum, int len, int &maxlen){
        
        // base case
        if(root == NULL){
            
            if(len > maxlen){
                maxlen = len;
                maxSum = sum;
            }
            else if(len == maxlen){
                maxSum = max(maxSum, sum);
            }
            return ;
        }
        
        sum = sum + root->data;
        
        solve(root->left, sum, maxSum, len+1, maxlen);
        solve(root->right, sum, maxSum, len+1, maxlen);
        
    }
    
public:
    
    int sumOfLongRootToLeafPath(Node *root)
    {
        int len = 0;
        int maxlen = 0;
        
        int sum = 0;
        int maxSum = INT_MIN;
        
        solve(root, sum, maxSum, len, maxlen);
        
        return maxSum;
    }
};
