#include<iostream>
using namespace std;


// output

/*

5
A
B C
C D E
D E F G
E F G H I

*/


int main(){

    int n;
    cin >> n;

    
    int i=1;
    
    while(i <= n){
        int j=1;
        char ch = 'A' + i -1;
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
