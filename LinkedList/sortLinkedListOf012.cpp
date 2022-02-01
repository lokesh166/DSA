


// APPORACE 1

/********************************
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

********************************/

Node* sortList(Node *head)
{
    int zeroCount = 0;
    int oneCount = 0;
    int secondCount = 0;
    
    Node* temp = head;
    
    while(temp != NULL){
        int val = temp -> data;
        if(val == 0){
			zeroCount++;
        }
        else if(val == 1){
           oneCount++;
        }
        else{
            secondCount++;
        }
        temp = temp -> next;
    }

    temp = head;
    while(temp != NULL){
        if(zeroCount != 0){
            temp -> data = 0;
            zeroCount--;
        }else if(oneCount != 0){
            temp -> data = 1;
            oneCount--;
        }else if(secondCount != 0){
            temp -> data = 2;
            secondCount--;
        }
        temp = temp -> next;
    }
    return head;
}
