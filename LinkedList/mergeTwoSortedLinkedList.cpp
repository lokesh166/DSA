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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL){
            return list2;
        }
        if(list2 == NULL){
            return list1;
        }
        ListNode* result;
        if(list1->val < list2->val){
            result = list1;
            result-> next = mergeTwoLists(list1->next, list2);
        }else{
            result = list2;
            result -> next = mergeTwoLists(list1, list2->next);
        }
        return result;
    }
};








// code studio problem solution


/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* solve(Node<int>* first, Node<int>* second){
    
    if(first -> next == NULL){
        first -> next = second;
        return first;
    }
    
    Node<int>* curr1 = first;
    Node<int>* next1 = curr1 -> next;
    Node<int>* curr2 = second;
    Node<int>* next2 = curr2 -> next;
    
    while(next2 != NULL && curr2 != NULL){
        if((curr2 -> data >= curr1 -> data)  && (curr2 -> data <= next1 -> data)){
            curr1 -> next = curr2;
            next2 = curr2 -> next;
            curr2 -> next = next1;
            
            curr1 = curr2;
            curr2 = next2;
        }else{
            curr1 = next1;
            next1 = next1 -> next;
            
            if(next1 == NULL){
                curr1 -> next = curr2;
                return first;
            }
        }
    }
    return first;
}

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
	if(first == NULL){
        return second;
    }
    if(second == NULL){
		return first;
    }
    
    if(first -> data <= second -> data){
		return solve(first, second);
    }else{
       return solve(second, first);
    }
}
