// level order traversal
void levelOrderTraversal(node* root){
    if(root == NULL){
        cout << " NULL";
    }

    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp == NULL){
            // level is complete 
            cout << endl;

            // still queue have some element 
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            cout << temp->data <<" ";

            // check is temp left part exit or not 
            if(temp->left){
                q.push(temp->left);
            }

            if(temp->right){
                q.push(temp->right);
            }

        }
    }
}

// preorder traversal  recursive method
void preOrder(node* root){
    // base case 
    if(root == NULL){
        return ;
    }

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

// preorder traversal  iterative method

#include<bits/stdc++.h>
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        
        if(root == NULL){
            return ans;
        }
        
        stack<TreeNode*> st;
        st.push(root);
        while(!st.empty()){
            root = st.top();
            st.pop();
            ans.push_back(root -> val);
            if(root -> right != NULL){
                st.push(root -> right);
            }
            if(root -> left != NULL){
                st.push(root -> left);
            }
        }
        return ans;
    }
};


// inorder traversal  recursive method
void inOrder(node* root){
    // base case
    if(root == NULL){
        return ;
    }

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);

}



// inorder traversal  iterative method

#include<bits/stdc++.h>
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> st;
        vector<int> ans;
        
        TreeNode* temp = root;
        
        while(true){
            if(temp != NULL){
                st.push(temp);
                temp = temp -> left;
            }
            else{
                if(st.empty() == true) break;
                temp = st.top();
                st.pop();
                ans.push_back(temp -> val);
                temp = temp -> right;
            }
        }
        return ans;
    }
};






// postorder traversal recursive method
void postOrder(node* root){
    // base case
    if(root == NULL){
        return ;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";

}
