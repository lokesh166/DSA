#include<iostream>
using namespace std;


// output

/*
5
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

*/


int main(){

    int n;
    cin >> n;

    
    int i = 1;
    while(i <= n){
        int j = 1;
        while(j <= i){
            if((i+j)%2 == 0){
                cout << "1 ";
            }else{
                cout << "0 " ;
            }
            j++;
        }cout << endl;
        i++;
    }

    return 0;
}
