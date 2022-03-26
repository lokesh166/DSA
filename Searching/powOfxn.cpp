class Solution {
public:
    double myPow(double x, int n) {
       double res = pow(x,n);
        if(n < 0)
            return 1/res;
        return res;
    }
    
    double pow(double x, int n)
    {
        if(n==0)
            return 1;
        
        double temp = pow(x,n/2);      //eases the process since we need not care about inc/dec
        
        if(n % 2 == 0)
            return temp * temp ;
        else
            return x * temp * temp ;
     
    }
};




// binary search solution

class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
//         abs means mode the number if -1 -> 1
        for(int i=abs(n);i>0;i=i/2){
            if(i%2){
                if(n>0){
                    ans = ans*x;
                }else{
                    ans = ans/x;
                }
            }
            x = x*x;
        }
        return ans;
    }
};
