/*************************************************
        Following is the structure of class Node:
     
        class Node{
        public:
            int data;
            Node* next;
            
            Node(int data){
                this->data = data;
                this->next = NULL;
            }
            
        }
**************************************************/

bool isCircular(Node* head){
    if(head == NULL){
        return true;
    }
    
    Node* temp = head -> next;
    while(temp != NULL && temp != head){
        temp = temp -> next;
    }
    
    if(temp == head){
		return true;
    }else{
        return false;
    }
}
