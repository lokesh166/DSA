output
1 2 3 
4 5 6 
7 8 9


#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int i = 1;
    int temp = 1;
    while(i <= n){
        int j = n;
        while(j >= 1){
            cout << temp << " ";
            temp++;
            j--;
        }
        cout << endl;
        i++;
    }
    return 0;
}




output
9 8 7 
6 5 4 
3 2 1


#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int i = 1;
    int temp = n*n;
    while(i <= n){
        int j = n;
        while(j >= 1){
            cout << temp << " ";
            temp--;
            j--;
        }
        cout << endl;
        i++;
    }
    return 0;
 }
