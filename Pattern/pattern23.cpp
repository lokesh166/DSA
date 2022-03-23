#include<iostream>
using namespace std;


// output

/*
5
11111
 2222
  333
   44
    5

*/


int main(){

    int n;
    cin >> n;

    
    int i=1;
    
    while(i <= n){

        int space = 1;
        while(space < i){
            cout << " ";
            space++;
        }

        int j=1;
        while(j <= n-i+1){
            cout << i;
            j++;
        }
        i++;
        cout << endl;
    }

    return 0;
}
