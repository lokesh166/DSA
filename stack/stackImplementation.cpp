// stack implementation using array

#include<iostream>
using namespace std;

class stack{

public:
    int size;
    int *arr;
    int top;

    stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int data){
        if(top == size-1){
            cout << "stack overflow" << endl;
            return;
        }
        top++;
        arr[top] = data;
    }

    void pop(){
        if(top == -1){
            cout << "stack underflow " << endl;
            return;
        }
        top--;
    }

    int peak(){
        if(top == -1){
            cout << "stack underflow " << endl;
            return -1;
        }
        return arr[top];
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }
        return false;
    }
};

int main() {

    stack s(5);

    s.push(2);
    s.pop();


    return 0;
}



























// stack using linked list

#include<iostream>
using namespace std;

class Node {

public:
    int data;
    Node* next;
    
};
Node* top = NULL;

void push(int data){
    Node* temp = new Node();

    if(!temp){
        cout << "stack overFlow" << endl;
        return;
    }

    temp -> data = data;
    temp -> next = top;
    top = temp;
}

void pop(){

    if(top == NULL){
        cout << "stack is empty " << endl;
        return;
    }else{
        Node* todelete = top;
        top = top -> next;
        delete todelete;
    }
}

int peak(){
    if(top == NULL){
        return -1;
    }
    else{
        return top -> data;
    }
}

bool isEmpty(){
    return top == NULL;
}

int main(){

   
    
    push(2500);
    push(2);
    pop();
    

    

    


    

    return 0;
}
