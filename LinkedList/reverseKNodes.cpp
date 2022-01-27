

// not applicable for k = 3





Node* kReverse(Node* head, int k) {
    if(head == NULL){
        return NULL;
    }
    
    Node* pre = NULL;
    Node* curr = head;
    Node* next = NULL;
    int count = 0;
    
    while(curr != NULL && count < k){
        next = curr -> next;
        curr -> next = pre;
        pre = curr;
        curr = next;
        count++;
    }
    
    if(next != NULL){
        head -> next = kReverse(next, k);
    }
    return pre;
    
}
