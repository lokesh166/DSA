#include<iostream>
using namespace std;


// output

/*

5
1
2 3
3 4 5
4 5 6 7
5 6 7 8 9

*/


int main(){

    int n;
    cin >> n;

    
    int i=1;
    while(i<=n){
        int j=0;
        int count = i;
        while(j<i){
            cout << count << ' ';
            j++;
            count++;
        }
        cout << endl;
        i++;
    }

    return 0;
}


// another method without using extra count space 
#include<iostream>
using namespace std;


// output

/*

5
1
2 3
3 4 5
4 5 6 7
5 6 7 8 9

*/


int main(){

    int n;
    cin >> n;

    
    int i=1;
    while(i<=n){
        int j=i;
        while(j < i*2){
            cout << j << ' ';
            j++;
            
        }
        cout << endl;
        i++;
    }

    return 0;
}
