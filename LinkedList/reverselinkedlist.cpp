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

Node* reverseLinkedList(Node *head)
{
    
//     iterative way to reverse the linked list
    if(head == NULL || head -> next == NULL){
        return head;
    } 
    
    Node* prePtr = NULL;
    Node* currPtr = head;
    Node* nextPtr = NULL;
    
    while(currPtr != NULL){
        nextPtr = currPtr -> next;
        currPtr -> next = prePtr;
//         move one step 
        prePtr = currPtr;
        currPtr = nextPtr;
    }
    return prePtr;

}









// apporace 2




