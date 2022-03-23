#include<iostream>
using namespace std;


// output

/*
5
1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1

*/


int main(){

    int n;
    cin >> n;

    
    int i=1;
    while(i <= n){
        // step1: numbers from 1 to n-i+1
        int j = 1;
        while(j <= n-i+1){
            cout << j << " ";
            j++;
        }

        // step2: star print
        j=1;
        while(j <= (i-1)*2){
            cout << "* ";
            j++;
        }

        // step3: number print
        j = n-i+1;
        while(j >= 1){
            cout << j << " " ;
            j--; 
        }
        cout <<endl;
        i++;
    }

    return 0;
}
