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























































#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    // constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

// insert at head
void insertAtHead(Node* &head, int data){
    // new node create
    Node* n = new Node(data);
    n -> next = head;
    head = n;
}

// insert at tail
void insertAtTail(Node* &head, int data){
    Node* n = new Node(data);

    if(head == NULL){
        head = n;
        return;
    }
    Node* temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = n;
}

// linear search in the linked list
bool linearSearch(Node* head, int key){
    Node* temp = head;
    while(temp != NULL){
        if(temp -> data == key){
            return true;
        }
        temp = temp -> next;
    }
    return false;
}

// delete at head
void deleteAtHead(Node* &head){
    Node* todelete = head;
    head = head -> next;
    delete todelete;
}


// delate a node at tail
void deleteAtTail(Node* &head, int val){
    if(head == NULL) return;

    if(head -> next == NULL){
        deleteAtHead(head);
        return;
    }

    Node* temp = head;
    while(temp -> next -> data != val && temp != NULL){
        temp = temp -> next;
    }
    Node* todelete = temp -> next;
    temp -> next = temp -> next -> next;
    delete todelete;
    
}



// display function
void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data <<  " ";
        temp = temp -> next;
    }
    cout << endl;
}


int main(){

    Node* head = new Node(10);
    print(head);
    insertAtHead(head, 20);
    print(head);
    insertAtTail(head, 30);
    insertAtTail(head, 40);
    insertAtTail(head, 50);
    print(head);

    
    cout << linearSearch(head, 50) << endl; 

    deleteAtHead(head);
    print(head);
    deleteAtTail(head, 60);
    print(head);
    
    
    
    return 0;
}
