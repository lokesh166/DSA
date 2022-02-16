/**********************************************************

    Following is the Binary Tree Node class structure:

    template <typename T>
    class BinaryTreeNode {
      public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
        }
    };
    
***********************************************************/

void inorderTraversal(BinaryTreeNode<int> *root, int &cnt){
    if(root == NULL){
		return ;
    }
    
    inorderTraversal(root -> left, cnt);
    
    if(root -> left == NULL && root -> right == NULL)
    {
        cnt++;
    }
    
    inorderTraversal(root -> right, cnt);
    
}


int noOfLeafNodes(BinaryTreeNode<int> *root){
    int cnt = 0;
    
    inorderTraversal(root , cnt);
    
    return cnt;
}
