class Solution
{
    
    private:
    Node* reverse(Node* &head){
        Node* pre = NULL;
        Node* curr = head;
        Node* next = NULL;
        
        while(curr != NULL){
            next = curr -> next;
            curr -> next = pre;
            pre = curr;
            curr = next;
        }
        return pre;
    }
    
    void insertAtTail(struct Node* &head, struct Node* &tail, int val){
        Node* temp = new Node(val);
        
        if(head == NULL){
            head = temp;
            tail = temp;
            return;
        }else{
            tail -> next = temp;
            tail = temp;
        }
    }

struct Node* add(struct Node* first, struct Node* second){
    int carry = 0;
    
    Node* oneHead = NULL;
    Node* oneTail = NULL;
    
    while(first != NULL && second != NULL){
        
        int sum = carry + first -> data + second -> data;
        
        int digit = sum % 10;
        
        insertAtTail(oneHead, oneTail, digit);
        
        carry = sum / 10;
        
        first = first -> next;
        second = second -> next;
        
    }
    
    
    while(first != NULL){
        int sum = carry + first -> data;
        int digit = sum % 10;
        
        insertAtTail(oneHead, oneTail, digit);
        carry = sum / 10;
        first = first -> next;
    }
    
    while(second != NULL){
        int sum = carry + second -> data;
        int digit = sum % 10;
        
        insertAtTail(oneHead, oneTail, digit);
        carry = sum / 10;
        second = second -> next;
    }
    
    while(carry != 0){
        int sum = carry;
        int digit = sum % 10;
        
        insertAtTail(oneHead, oneTail, digit);
        carry = sum / 10;
        
    }
    return oneHead;
}
    
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // step 1 to reverse the input LL
       first = reverse(first);
       second = reverse(second);
       
    //   step second to add the val
    Node* ans = add(first, second);
    
    ans = reverse(ans);
    
    return ans;
       
       
    }
};





// code optimized
