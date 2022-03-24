#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int ans = 0;
    int i = 0;
    while(n != 0){
        int lastBit = n & 1;
        // cout << "last bit " << lastBit<< endl;
        ans = (lastBit * pow(10, i)) + ans;
        // cout << " this is a ans -> " << ans << endl;
        n = n >> 1;
        // cout <<"n -> "<< n<< endl;
        i++;
    }

    cout << ans;

    return 0;
}
