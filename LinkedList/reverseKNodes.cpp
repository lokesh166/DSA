

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



























/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
   
        if(head == NULL || k == 1){
         return head;
    }
            
        
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        
        int count = 0;
        ListNode* curr = dummy;
        ListNode* nex = dummy;
        ListNode* pre = dummy;
        
        while(curr->next != NULL){
            curr = curr->next;
            count++;
        }
        
        while(count >= k){
            curr = pre->next;
            nex = curr->next;
            for(int i = 1; i<k; i++){
                curr->next = nex->next;
                nex ->next = pre->next;
                pre->next = nex;
                nex = curr->next;
            }
            pre = curr;
            count -= k;
        }
        return dummy->next;
    }
};
