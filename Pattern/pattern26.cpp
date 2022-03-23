#include<iostream>
using namespace std;


// output

/*
5
        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1

*/


int main(){

    int n;
    cin >> n;

    
    int row = 1;
    while(row <= n){
        int space = 1;
        while(space <= n-row){
            cout << "  "; // maitain double space
            space++;
        }
        int col = 1;
        while(col <= row){
            cout << col << " ";
            col++;
        }
        col = row-1;
        while(col >= 1){
            cout << col << " ";
            col--;
        }
        cout << endl;
        row++;

    }

    return 0;
}
