#include<iostream>
using namespace std;


// output

/*
5
*        *
**      **
***    ***
****  ****
**********
**********
****  ****
***    ***
**      **
*        *

*/


int main(){

    int n;
    cin >> n;

    
    int i = 1;
    while(i <= n){
        int j = 1;
        while(j <= i){
            cout << "*";
            j++;
        }

        int space = 1;
        while(space <= (n-i)*2){
            cout << " ";
            space++;
        }

        j = 1;
        while(j <= i){
            cout << "*";
            j++;
        }
    cout << endl;
        i++;
    }


     i = n;
    while(i >= 1){
        int j = 1;
        while(j <= i){
            cout << "*";
            j++;
        }

        int space = 1;
        while(space <= (n-i)*2){
            cout << " ";
            space++;
        }

        j = 1;
        while(j <= i){
            cout << "*";
            j++;
        }

    cout << endl;
        i--;
    }


    return 0;
}
