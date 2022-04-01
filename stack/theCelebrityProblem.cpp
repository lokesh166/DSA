class Solution 
{
    public:
    
    bool knows(vector<vector<int> >& M, int a, int b, int n){
        if(M[a][b] == 1){
            return true;
        }else{
            return false;
        }
    } 
    
    
    
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        
        stack<int> s;
        
        // push the person into stack
        for(int i=0; i<n; i++){
            s.push(i);
        }
        
        // check two person knowns each other or not
        while(s.size() > 1){
            int a = s.top();
            s.pop();
            
            int b = s.top();
            s.pop();
            
            if(knows(M, a, b, n)){
                s.push(b);
            }else{
                s.push(a);
            }
        }
        
        int candidate = s.top();
        
        // the remaing person(one) in the stack potential celebrity
        
        // for row check 
        bool rowCheck = false;
        int zeroCount = 0;
        
        for(int i=0; i<n; i++){
            if(M[candidate][i] == 0){
                zeroCount++;
            }
        }
        
        if(zeroCount == n){
            rowCheck = true;
        }
        
        // for col check
        bool colCheck = false;
        int oneCount = 0;
        
        for(int i=0; i<n; i++){
            if(M[i][candidate] == 1){
                oneCount++;
            }
        }
        
        if(oneCount == n-1){
            colCheck = true;
        }
        
        if(rowCheck == true && colCheck == true){
            return candidate;
        }else{
            return -1;
        }
        
    }
};
