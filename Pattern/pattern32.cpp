#include<iostream>
using namespace std;


// output

/*
5
    1
   2 2
  3 3 3
 4 4 4 4
5 5 5 5 5

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

        j = 1;
        while(j <= i){
            cout << i << " " ;
            j++;
        }

        i++;
        cout << endl;
    }


    return 0;
}
