// apporace 1

/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/
#include<map>
Node* reverse(Node* head){
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

Node *lastAppearance(Node *head){
    
    if(head == NULL || head -> next == NULL){
		return head;
    }
   head = reverse(head);
//     cout << head -> data << endl;
    map<int, bool> visited;
    Node* dummy = new Node(-1);
    Node* pre = dummy;
    Node* temp = head;
    while(temp != NULL){
        if(visited[temp -> data] == true){
            Node* todelete = temp;
            pre -> next = temp -> next;
            temp = temp -> next;
            delete todelete;
        }else{
            visited[temp -> data] = true;
            pre = temp;
            temp = temp -> next;
        }
    }
    delete dummy;
   head =  reverse(head);
    return head;
}
