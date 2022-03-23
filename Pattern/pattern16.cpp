#include<iostream>
using namespace std;


// output

/*

5
A
B B
C C C
D D D D
E E E E E

*/


int main(){

    int n;
    cin >> n;

    
    int i=1;
    char ch = 'A';
    while(i <= n){
        int j=1;
        char ch = 'A' + i -1;
        while(j <= i){
            // 'A' ascii value is 65
            cout << ch <<  " ";
            
            
            j++;
            
            
        }
        cout << endl;
        i++;
    }

    return 0;
}
