#include<stack>
#include<limits.h>

class SpecialStack {
    // Define the data members.
    stack<int> s;
    int mini = INT_MAX;

    /*----------------- Public Functions of SpecialStack -----------------*/
    public:
        
    void push(int data) {
//         condition for empty case 
        if(s.empty()){
            s.push(data);
            mini = data;
        }
        
        if(data < mini){
     		int val = 2*data - mini;
            s.push(val);
            mini = data;
        }else{
            s.push(data);
        }
    }

    int pop() {
        if(s.empty()){
            return -1;
        }
        int val = s.top();
        s.pop();
        if(val > mini){
            return val;
        }else{
            int preMin = mini;
            int temp = 2*mini - val;
            mini = temp;
            return preMin;
        }
    }

    int top() {
         if(s.empty())
            return -1;
        
        int curr = s.top();
        if(curr < mini) {
            return mini;
        }
        else
        {
            return curr;
        }
        
    }

    bool isEmpty() {
        return s.empty();
    }

    int getMin() {
         if(s.empty())
            return -1;
        
        return mini;
    }  
};
