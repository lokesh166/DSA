void insertAtBottom(stack<int> &s, int element){
    if(s.empty() || (!s.empty() && s.top() < element)){
        s.push(element);
        return;
    }
    
    int num = s.top();
    s.pop();
    
    insertAtBottom(s, element);
    
    s.push(num);
}



void sortStack(stack<int> &stack)
{
//     base case
    if(stack.empty()){
        return;
    }
    
	int num = stack.top();
    stack.pop();
    
//     recursive call
    sortStack(stack);
    
//     insert at bottom in sortred format
    insertAtBottom(stack, num);
    
}
