#include<iostream>
using namespace std;


// output

/*
5
*        *
**      **
* *    * *
*  *  *  *
*   **   *
*   **   *
*  *  *  *
* *    * *
**      **
*        *

*/


int main(){

    int n;
    cin >> n;

    // upper part
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(j==1 || j==i){
                cout<<"*";
            }else{
                cout<<" ";
            }
                
        }
        for(int j=1;j<=2*n-2*i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            if(j==1 || j==i){
                cout<<"*";
            }else{
                cout<<" ";
            }
                
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            if(j==1 || j==i){
                cout<<"*";
            }else{
                cout<<" ";
            }
                
        }
        for(int j=1;j<=2*n-2*i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            if(j==1 || j==i){
                cout<<"*";
            }else{
                cout<<" ";
            }
                
        }
        cout<<endl;
    }


    return 0;
}
