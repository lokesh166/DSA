// APPORACE 1


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == NULL || headB == NULL) return NULL;
        
//         makeing two dummynodes
        ListNode *dummy1 = headA;
        ListNode *dummy2 = headB;
        
        while(dummy1 != dummy2){
            dummy1 = dummy1 == NULL? headB : dummy1->next;
            dummy2 = dummy2 == NULL? headA : dummy2->next;
        }
        return dummy1;
        
    }
};




// apporace 2
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */


int length(ListNode* head){
    ListNode* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp -> next;
    }
    return count;
}

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        if(headA == NULL || headB == NULL){
            return NULL;
        }
        
        int l1 = length(headA);
        int l2 = length(headB);
        
        ListNode* temp1 = headA;
        ListNode* temp2 = headB;
        
        
        if(l1 > l2){
            
            int d = l1-l2;
            
            while(d){
                temp1 = temp1 -> next;
                d--;
            }
            
        }else{
            int d = l2-l1;
            while(d){
                temp2 = temp2 -> next;
                d--;
            }
        }
        
        while(temp1 != temp2){
           temp1 = temp1 -> next;
            temp2 = temp2 -> next;
        }
        
        return temp1;
    }
};
