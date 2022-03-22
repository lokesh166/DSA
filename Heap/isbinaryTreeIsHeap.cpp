// max heap 

class Solution {
  public:
  
  
  int countNodes(struct Node* root){
//         base case
        if (root == NULL)
            return 0;
        int ans=1 + countNodes(root->left) + countNodes(root->right);
        return ans;
    }
    
    bool isCBT(struct Node* root, int index, int totalCount){
        if (root == NULL)
            return true;
        if (index >= totalCount)
            return false;
        else {
            bool left = isCBT(root->left, 2*index+1, totalCount);
            bool right = isCBT(root->right, 2*index+2, totalCount);
            return (left && right);
        }
    }
    
    
    bool isMaxheap(struct Node* root){
        // leaf node 
        if(root->left == NULL && root->right == NULL){
            return true;
        }
        if(root->right == NULL){
            return (root->data > root->left->data);
        }else{
            bool left = isMaxheap(root->left);
            bool right = isMaxheap(root->right);
            
            if(left && right && (root->data > root->left->data && root->data > root->right->data)){
                return true;
            }else{
                return false;
            }
        }
    }


bool isHeap(struct Node* tree) {
        int index = 0;
        int totalCount = countNodes(tree);
        if(isCBT(tree,index,totalCount) && isMaxheap(tree))
            return true;
        else 
            return false;
