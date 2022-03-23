#include<iostream>
using namespace std;


// output

/*

5
A A A A A
B B B B B
C C C C C
D D D D D
E E E E E

*/


int main(){

    int n;
    cin >> n;

    
    int i=1;
    while(i <= n){
        int j=1;
        while(j <= n){
            // 'A' ascii value is 65
            cout << (char)(65 + i -1) << " ";
            j++;
            
        }
        cout << endl;
        i++;
    }

    return 0;
}
