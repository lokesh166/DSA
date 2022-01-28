#include<iostream>
using namespace std;

class node{

    public:
    int data;
    node* next;
    node* pre;

    // constructor
    node(int data){
        this -> data = data;
        this -> next = NULL;
        this -> pre = NULL;
    }
};


// insert at head
void insertAtHead(node* &head, int val){
    node* n = new node(val);
    n -> next = head;
    if(head != NULL){
        head -> pre = n;
    }
    head = n;
}


// insert at tail
void insertAtTail(node* &head, int val){
    if(head == NULL){
        insertAtHead(head, val);
        return;
    }
    node* n = new node(val);
    node* temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = n;
    n -> pre = temp;
}

// delete at head
void deleteAtHead(node* &head){
    if(head == NULL) return;

    node* todelete = head;
    head = head -> next;
    head -> pre = NULL;

    delete todelete;
}


// delete at specific position
void deletion(node* &head, int pos){
    if(pos == 1){
        deleteAtHead(head);
    }

    node* temp = head;
    int count = 1;
    while(temp != NULL && count != pos){
        temp = temp -> next;
        count++;
    }

    temp -> pre -> next = temp -> next;

    if(temp -> next != NULL){
        temp -> next -> pre = temp -> pre;
    }

    delete temp;
}


// display function 
void print(node* head){
    node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}


int main(){

    node* head = NULL;

    insertAtHead(head, 10);
    print(head);
    insertAtHead(head, 20);
    print(head);
    
    insertAtTail(head,30);
    print(head);

    deletion(head,2);
    print(head);
    
    


    


    return 0;
}
