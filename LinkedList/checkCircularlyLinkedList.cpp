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


// it will give time limit exceed at some platform 

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



// it does not give TLE

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
    if(head == NULL) return true;
    
    if(head->next == NULL) return false;
    
    if(head-> next  == head) return true;
    
    Node* temp = head->next;
    head->data = 0;
    
    while(temp != NULL && temp->data != 0){
		temp->data = 0;
        temp = temp->next;
    }
    
    if(temp == NULL) return false;
    
    if(temp->data == 0 && temp != head) return false;
    
    return true;
}
