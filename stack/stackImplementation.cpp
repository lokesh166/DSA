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
