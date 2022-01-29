

// apporace 1






// using two node pointers gfg 

void removeDuplicates( Node* start)
{
     Node *ptr1, *ptr2, *dup;
    ptr1 = start;
 
    /* Pick elements one by one */
    while (ptr1 != NULL && ptr1->next != NULL) {
        ptr2 = ptr1;
 
        /* Compare the picked element with rest
           of the elements */
        while (ptr2->next != NULL) {
            /* If duplicate then delete it */
            if (ptr1->data == ptr2->next->data) {
                /* sequence of steps is important here */
                dup = ptr2->next;
                ptr2->next = ptr2->next->next;
                delete (dup);
            }
            else /* This is tricky */
                ptr2 = ptr2->next;
        }
        ptr1 = ptr1->next;
    }
}





// using three node pointer own



void removeDuplicates(Node* &head){
    Node* temp = head;
    Node* pre = temp;
    Node* temp_next = temp -> next;

   while(temp != NULL){
    pre = temp;
    temp_next = temp -> next;
    
       while(temp_next != NULL){
        
           if(temp -> data == temp_next -> data){
               Node* todelete = pre -> next;
               pre -> next = pre -> next -> next;
            
               delete todelete;
               temp_next = temp_next -> next;
            
               
           }else{
           
               pre = pre -> next;
               temp_next = temp_next -> next;
           }
       }
       temp = temp -> next;
       
   } 
}























// optimize way using mapping


void removeduplicatesUsingMap(Node* &head){
    Node* temp = head;
    Node* pre = head;
    map<int, bool> visited;

    while(temp != NULL){
        
        if(visited[temp->data] == true){
            Node* todelete = pre -> next;
            pre -> next = pre -> next -> next;
            temp = temp -> next;
            delete todelete;
           
            

        }else{
            visited[temp -> data] = true;
         cout << "hiii";
            pre = temp;
        temp = temp -> next;
        }
    }
}
