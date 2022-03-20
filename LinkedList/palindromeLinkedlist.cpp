

// approace 2



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
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return true;
        }
        
        ListNode *slow = head;
        ListNode *fast = head;
        
        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        slow->next = reverseList(slow->next);
        slow = slow->next;
        
        while(slow != NULL){
            if(head->val != slow->val){
                return false;
                head = head->next;
                slow = slow->next;
            } 
            return true;
        }
        
        
        ListNode *reverseList(ListNode *head){
            ListNode *pre = NULL;
            ListNode *next = NULL;
            while(head != NULL){
                next = head->next;
                head->next = pre;
                pre = head;
                head = next;
            }
            return pre;
        }
    }
};


















// approace 1






class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        if(head == NULL || head -> next == NULL){
            return true;
        }
        vector<int> arr;
        Node* temp = head;
        
        while(temp != NULL){
            int val = temp -> data;
            arr.push_back(val);
            temp = temp -> next;
        }
        
        int n = arr.size();
        int e = n-1;
        int s = 0;
        while(s<=e){
            if(arr[s] != arr[e]){
                return false;
            }else{
                s++;
                e--;
            }
        }
        return true;
        
    }
};


















class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        if(head == NULL || head -> next == NULL){
            return true;
        }
        vector<int> arr;
        Node* temp = head;
        
        while(temp != NULL){
            int val = temp -> data;
            arr.push_back(val);
            temp = temp -> next;
        }
        
        int n = arr.size();
        int e = n-1;
        int s = 0;
        while(s<=e){
            if(arr[s] != arr[e]){
                return false;
            }else{
                s++;
                e--;
            }
        }
        return true;
        
    }
};





