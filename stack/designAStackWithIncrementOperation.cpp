class CustomStack {
public:
    
    int size;
    int *arr;
    int top;
    
    CustomStack(int maxSize) {
        this -> size = maxSize;
        arr = new int[size];
        top = -1;
    }
    
    void push(int x) {
        if(top == size-1){
            return;
        }
        top++;
        arr[top] = x;
    }
    
    int pop() {
        if(top == -1){
            return -1;
        }
        int num = arr[top];
        top--;
        return num;
    }
    
    void increment(int k, int val) {
        for(int i = 0;i<min(k,size);i++) arr[i]+=val;
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */
