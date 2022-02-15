#include<iostream>
#include<queue>
using namespace std;


class node{

public:
    int data;
    node* left;
    node* right;

    node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

node* builtTree(node* root){
    cout << "enter the data " << endl;
    int data;
    cin >> data;

    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout << "enter the data for left part " << data << endl;
    root -> left = builtTree(root -> left);

    cout << "enter the data for right part " << data << endl;
    root -> right = builtTree(root -> right);
    

    cout << "root reurn "<<   root-> data << endl;
    return root;

}

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
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }else{

            cout << temp -> data << " ";
            

            if(temp -> left){
                q.push(temp -> left);
            }

            if(temp -> right){
                q.push(temp -> right);
            }

        }
    }
}


int main(){


    node* root = NULL;

    root = builtTree(root);


    levelOrderTraversal(root);

    return 0;
}
