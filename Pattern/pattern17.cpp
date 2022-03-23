#include<iostream>
using namespace std;


// output

/*

5
A
B C
D E F
G H I J
K L M N O

*/


int main(){

    int n;
    cin >> n;

    
    int i=1;
    char ch = 'A';
    while(i <= n){
        int j=1;
        
        while(j <= i){
            // 'A' ascii value is 65
            cout << ch <<  " ";
            ch++;
            
            j++;
            
            
        }
        cout << endl;
        i++;
    }

    return 0;
}
