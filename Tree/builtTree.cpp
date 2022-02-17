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


// recursive method


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


// iterative method


void builtFromLevelOrder(node* &root){
    queue<node*> q;
    cout << "enter the data for root" << endl;
    int data;
    cin >> data;
    root = new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout << "enter the data for left node  " << temp -> data << endl;
        int leftdata;
        cin >> leftdata;

        if(leftdata != -1){
            temp -> left = new node(leftdata);
            q.push(temp -> left);
        }

        cout << "enter the data for right node  " << temp -> data << endl;
        int rightdata;
        cin >> rightdata;

        if(rightdata != -1){
            temp -> right = new node(rightdata);
            q.push(temp -> right);
        }
    }
}




int main(){


    node* root = NULL;

    root = builtTree(root);


    levelOrderTraversal(root);

    return 0;
}
