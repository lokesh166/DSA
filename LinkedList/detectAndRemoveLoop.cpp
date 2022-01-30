bool detectLoopMap(Node* head){
    if(head == NULL) {
        return false;
    }
    Node* temp = head;
    map<Node*, bool> visited;

    while(temp != NULL){
        if(visited[temp] == true){
            return true;
        }else{
            visited[temp] = true;
        }
        temp = temp -> next;
    }
    return false;
}

Node* floyedCycle(Node* head){
    if(head == NULL){
        return head;
    }

    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL){
        
        fast = fast -> next;
        if(fast != NULL){
            fast = fast -> next;
        }
        slow = slow -> next;
        if(slow == fast){
            return slow;
        }
    }
    return NULL;
}

Node* findStartingNode(Node* head){
    if(head == NULL){
        return head;
    }
    Node* intersection = floyedCycle(head);

    if(intersection == NULL){
        return NULL;
    }

    Node* slow = head;

    while(slow != intersection){
        slow = slow -> next;
        intersection = intersection -> next;
    }
    return slow;
}


void removeLoop(Node* &head){
    if(head == NULL){
        return;
    }
    Node* starting = findStartingNode(head);

    if(starting == NULL){
        return;
    }
    Node* temp = starting;

    while(temp -> next != starting){
        temp = temp -> next;
    }
    temp -> next = NULL;
}

