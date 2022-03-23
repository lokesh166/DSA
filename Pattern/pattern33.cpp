#include<iostream>
using namespace std;


// output

/*
5
    1
   212
  32123
 4321234
543212345

*/


int main(){

    int n;
    cin >> n;

    
    int i = 1;
    while(i <= n){

        int j = 1;
        while(j <= n-i){
            cout << " ";
            j++;
        }

        j = i;
        while(j >= 1){
            cout << j  ;
            j--;
        }
        j = 2;
        while(j <= i){
            cout << j  ;
            j++;
        }

        i++;
        cout << endl;
    }


    return 0;
}
