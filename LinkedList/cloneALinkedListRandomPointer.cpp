
// approah 1 using map function

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
    private:
    void insertAtTail(Node* &head, Node* &tail, int d){
        Node* newNode = new Node(d);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }
        
        tail -> next = newNode;
        tail = newNode;
    }
public:
    Node* copyRandomList(Node* head) {
        Node* cloneHead = NULL;
        Node* cloneTail = NULL;
        
        Node* temp = head;
        
//         clone a linkedList
        
        while(temp != NULL){
            insertAtTail(cloneHead, cloneTail, temp -> val);
            temp = temp -> next;
        }
        
        
        
//         mapping original LL to clone LL
        unordered_map<Node* , Node*> mapping;
        
        Node* originalNode = head;
        Node* cloneNode = cloneHead;
        
        while(originalNode != NULL){
            mapping[originalNode] = cloneNode;
            originalNode = originalNode -> next;
            cloneNode = cloneNode -> next;
        }
        
//         random pointer fixed operation
        originalNode = head;
        cloneNode = cloneHead;
        
        while(originalNode != NULL){
            cloneNode -> random = mapping[originalNode -> random];
            originalNode = originalNode -> next;
            cloneNode = cloneNode -> next;
        }
        
        return cloneHead;
    }
};




// approach 2 using linked change 


/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
    
    private:
//     insert at tail
    void insertAtTail(Node* &head, Node* &tail, int val){
        Node* n = new Node(val);
        if(head == NULL){
            head = n;
            tail = n;
        }else{
            tail->next = n;
            tail = n;
        }
    }
    
    
public:
    Node* copyRandomList(Node* head) {
        // step1  create a clone list 
        Node* cloneHead = NULL;
        Node* cloneTail = NULL;
        
        Node* temp = head;
        
        while(temp != NULL){
            insertAtTail(cloneHead, cloneTail, temp->val);
            temp = temp->next;
        }
        
        // step 2: insert nodes of Clone List in between originalList
        
        Node* originalNode = head;
        Node* cloneNode = cloneHead;
        
        while(originalNode != NULL && cloneNode != NULL){
            Node* next = originalNode->next;
            originalNode->next = cloneNode;
            originalNode = next;
            
            
            next = cloneNode->next;
            cloneNode->next = originalNode;
            cloneNode = next;
        }
        
        // step 3: Random pointer copy
        
        temp = head;
        
        while(temp != NULL){
            if(temp->next != NULL){
                temp->next->random = temp->random ? temp->random->next : temp->random;
            }
            temp = temp->next->next;
        }
        
        //step 4: revert step 2 changes
        
        originalNode = head;
        cloneNode = cloneHead;
        
         while (originalNode != NULL  && cloneNode != NULL)
            {
                originalNode->next = cloneNode->next;
                originalNode = originalNode->next;
             
                if(originalNode != NULL){
                    cloneNode->next = originalNode->next;
                }
                cloneNode = cloneNode->next;
            }
    
        // step 5 answer return
        return cloneHead;
        
    }
};
