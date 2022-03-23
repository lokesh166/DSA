#include<iostream>
using namespace std;


// output

/*

5
25 24 23 22 21
20 19 18 17 16
15 14 13 12 11
10 9 8 7 6
5 4 3 2 1

*/


int main(){

    int n;
    cin >> n;

    
    int i=0;
    int count = n*n;
    while(i<n){
        int j=0;
        while(j<n){
            cout <<count<< ' ';
            j++;
            count--;
        }
        cout << endl;
        i++;
    }

    return 0;
}
