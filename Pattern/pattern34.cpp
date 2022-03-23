#include<iostream>
using namespace std;


// output

/*
5
    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *

*/


int main(){

    int n;
    cin >> n;

    // upper part
    int i = 1;
    while(i <= n){

        int j = 1;
        while(j <= n-i){
            cout << " ";
            j++;
        }

        j = 1;
        while(j <= 2*i-1){
            cout << "*" ;
            j++;
        }

        i++;
        cout << endl;
    }
    // lower part
     i = n;
    while(i >= 1){

        int j = 1;
        while(j <= n-i){
            cout << " ";
            j++;
        }

        j = 1;
        while(j <= 2*i-1){
            cout << "*" ;
            j++;
        }

        i--;
        cout << endl;
    }


    return 0;
}
