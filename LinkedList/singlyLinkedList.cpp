#include<iostream>
using namespace std;

class Node {

    public:
    int data;
    Node* next;

    // constructor
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }

};

// function for insertion of node at the begnning of the node

void insertAtHead(Node* &head, int data){
    
    // new node create
    Node* temp = new Node(data);
    temp -> next = head;
    head = temp;
}


// insertion at tail
void insertAtTail(Node* &head, int data){
    // new node create
    Node* n1 = new Node(data);

    Node* temp = head;

    while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = n1;

}


// insert at specific position
void insertAtPosition(Node* head, int pos, int data){
    
    // insert at start
    if(pos == 1){
        insertAtHead(head, data);
    };

    Node* temp = head;
    int count = 1;

    while(count < pos -1){
        temp = temp -> next;
        count++;
    } 

    // insert at tail
    if(temp -> next == NULL){
        insertAtTail(head, data);
    }
    Node *n1 = new Node(data);

    n1 -> next = temp -> next;
    temp -> next = n1;
}

// delete a node at given position
void deleteNode(Node* &head, int pos){

    // delete start node or firt node
    if(pos == 1){
        Node* temp = head;
        head = head -> next;
        // memory free start node
        temp -> next = NULL;
        delete temp;
    }else{
        // delete any middle node or last node
        Node* curr = head;

        int count = 1;
        while(count < pos-1){
            curr = curr ->next;
            count++;
        }
        
        Node* todelete = curr ->next;
        curr -> next = curr -> next ->next;
        delete todelete;
    }



}





void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " "; 
        temp = temp -> next;
    }cout << endl;
}

int main(){

    // created a new node
    Node* node1 = new Node(10);

    // printing the data of the node and address
    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;

    Node* head = node1;
    // Node* tail = node1;

    insertAtHead(head, 20);
    insertAtHead(head, 30);
    insertAtHead(head, 40);
    insertAtHead(head, 50);
    print(head);
    // 50 40 30 20 10 

    insertAtTail(head, 60);
    print(head);
    // 50 40 30 20 10 60

    insertAtPosition(head, 4, 70);
    print(head);
    // 50 40 30 70 20 10 60

    deleteNode(head, 4);
    print(head);
    // 50 40 30 20 10 60









    


    return 0;
}
