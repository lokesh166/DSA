#include<iostream>
using namespace std;


// output

/*

5
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25

*/


int main(){

    int n;
    cin >> n;

    
    int i=0;
    int count = 1;
    while(i<n){
        int j=0;
        while(j<n){
            cout <<count<< ' ';
            j++;
            count++;
        }
        cout << endl;
        i++;
    }

    return 0;
}
