#include<iostream>
using namespace std;


// output

/*

5
A B C D E
B C D E F
C D E F G
D E F G H
E F G H I

*/


int main(){

    int n;
    cin >> n;

    
    int i=1;
    char ch = 'A';
    while(i <= n){
        char ch = 'A' + i -1;
        int j=1;
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








#include<iostream>
using namespace std;


// output

/*

5
A B C D E
B C D E F
C D E F G
D E F G H
E F G H I

*/


int main(){

    int n;
    cin >> n;

    
    int i=1;
    char ch = 'A';
    while(i <= n){
        int j=1;
        while(j <= n){
             char ch = 'A' + i + j -2;
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
