#include<bits/stdc++.h>

int powerOfTwo(int n ){
	
	// base case
	if(n == 0) {
		return 1;
	}

	return 2*powerOfTwo(n-1);
}


using namespace std;

int main() {
	int n;
	cin >> n;

	int ans = powerOfTwo(n);
	
	cout << ans;

	return 0;
}
