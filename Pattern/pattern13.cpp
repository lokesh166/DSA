#include<iostream>
using namespace std;


// output

/*

5
A B C D E
A B C D E
A B C D E
A B C D E
A B C D E

*/


int main(){

    int n;
    cin >> n;

    
    int i=1;
    while(i <= n){
        int j=1;
        char ch = 'A';
        while(j <= n){
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
