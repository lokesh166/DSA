


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



// apporace 2 without change the node data;



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
    Node* dummyZero = new Node(-1);
    Node* dummyOne = new Node(-1);
    Node* dummyTwo = new Node(-1);
    
    Node* temp = head;
    Node* tempZero = dummyZero;
    Node* tempOne = dummyOne;
    Node* tempTwo = dummyTwo;
    
    
    while(temp != NULL){
        int val = temp -> data;
        if(val == 0){
            tempZero -> next = temp;
            tempZero = tempZero -> next;
        }else if(val == 1){
            tempOne -> next = temp;
            tempOne = tempOne -> next;
        }else if(val == 2){
            tempTwo -> next = temp;
            tempTwo = tempTwo -> next;
        }
        temp = temp -> next;
    }
    
    
    tempZero -> next = dummyOne -> next;
    tempOne -> next = dummyTwo -> next;
    tempTwo -> next = NULL;
    
    head = dummyZero -> next;
    
    
    delete dummyZero;
    delete dummyOne;
    delete dummyTwo;
     
    return head;
}

