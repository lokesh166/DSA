
// this apporace take O(n) time complixity


#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n<=1){
        return false;
    }

    for(int i=0; i<n; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}


int main(){

    int n;
    cin >> n;

    if(isPrime(n)){
        cout << "it is a prime number";
    }else{
        cout << "it is a not prime number";
    }
    return 0;
}












// apporace 2 time complixity o(nloglogn)


class Solution {
public:
    int countPrimes(int n) {
        int cnt = 0;
        vector<bool> prime(n+1, true);
        
        prime[0] = prime[1] = false;
        
        for(int i=0; i<n; i++){
            if(prime[i]){
                cnt++;
                for(int j=2*i; j<n; j=j+i){
                    prime[j] = 0;
                }
            }
        }
        return cnt;
    }
};
