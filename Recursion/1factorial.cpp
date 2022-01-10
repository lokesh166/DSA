#include<bits/stdc++.h>


int factorial(int n){

	// base case
	if(n == 0) return 1;

	int smallProblem = factorial(n-1);
	int bigProblem = n * smallProblem;

	return bigProblem;
}

using namespace std;

int main() {
	int n;
	cin >> n;

	int ans = factorial(n);
	
	cout << ans;

	return 0;
}
