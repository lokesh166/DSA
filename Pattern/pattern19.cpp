#include<iostream>
using namespace std;


// output

/*

E
D E
C D E
B C D E
A B C D E

*/


int main(){

    int n;
    cin >> n;

    
    int i=1;
    
    while(i <= n){
        int j=1;
        char ch = 'A' + n -i;
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








#include<iostream>
using namespace std;


// output

/*

E
E D
E D C
E D C B
E D C B A

*/


int main(){

    int n;
    cin >> n;

    
    int i=1;
    
    while(i <= n){
        int j=1;
        char ch = 'A' + n -1;
        while(j <= i){
            // 'A' ascii value is 65
            cout << ch <<  " ";
            ch--;
            
            j++;
            
            
        }
        cout << endl;
        i++;
    }

    return 0;
}
