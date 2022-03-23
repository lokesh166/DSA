#include<iostream>
using namespace std;


// output

/*
5
*****
****
***
**
*


*/


int main(){

    int n;
    cin >> n;

    
    int i=1;
    
    while(i <= n){

        
        int j=1;
        while(j <= n-i+1){
            cout << "*";
            j++;
        }
        i++;
        cout << endl;
    }

    return 0;
}
