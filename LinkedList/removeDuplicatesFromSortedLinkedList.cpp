/************************************************************

    Following is the linked list node structure.
    
    class Node 
    {
        public:
        int data;
        Node* next;

        Node(int data) 
        {
            this->data = data;
            this->next = NULL;
        }
    };
    
************************************************************/

Node * uniqueSortedList(Node * head) {
    // Write your code here. bbn0
    
    Node* temp = head;
    while(temp != NULL){
        if((temp -> next != NULL) &&temp -> data == temp -> next -> data){
            Node* next_next = temp -> next -> next;
            Node* todelete = temp -> next;
            delete todelete;
            temp -> next = next_next;
        }else{
            temp = temp -> next;
        }
    }
    return head;
}
