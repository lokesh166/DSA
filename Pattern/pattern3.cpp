#include<iostream>
using namespace std;


// output

// 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5


int main(){

    int n;
    cin >> n;

    
    int i=0;
    while(i<n){
        int j=1;
        while(j<=n){
            cout << j << ' ';
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}
