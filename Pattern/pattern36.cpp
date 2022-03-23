#include<iostream>
using namespace std;


// output

/*
5
    *****
   *   *
  *   *
 *   *
*****

*/


int main(){

    int n;
    cin >> n;

    int i, j;
    for (i=1; i<=n; i++)
    {
        // Print trailing spaces
        for (j=1; j<=n - i; j++)
            cout << " ";
             
        // Print stars after spaces
        // Print stars for each solid rows
        if (i==1 || i==n)
            for (j=1; j<=n; j++)
                cout << "*";
                 
        // stars for hollow rows
        else
            for (j=1; j<=n; j++)
                if (j==1 || j==n)
                    cout << "*";
                else
                    cout << " ";
        // Move to the next line/row
        cout << "\n";
    }

    return 0;
}
