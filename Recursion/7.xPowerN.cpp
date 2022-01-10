#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;


// for stack height N
int powerOfN(int x, int n){

	// base case
	if(n == 0) return 1;
	if(x == 0) return 0;

	int smallProblem = powerOfN(x,n-1);
	int bigProblem = x*smallProblem;
	return bigProblem;
}


// for stack  height logN
int newPowerOfN(int x, int n){
	// base case
	if(n == 0) return 1;
	if(x == 0) return 0;

	if(n%2 == 0){
		return newPowerOfN(x, n/2) * newPowerOfN(x, n/2);
	}else{
		return x * newPowerOfN(x, n/2) * newPowerOfN(x, n/2);
	}
}

int main() {
	int x = 2, n = 5;

	int ans = powerOfN(2,5);
	cout << ans << endl;


	int newAns = newPowerOfN(2,5);

	cout << newAns;

	return 0;
}
