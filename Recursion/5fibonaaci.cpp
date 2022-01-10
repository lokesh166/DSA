#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;


int fibonaaci(int n){

	
	// base case
	// if we consider 1 base indexing 
	if(n == 1) return 0;
	if(n == 2) return 1;

	return fibonaaci(n-1) + fibonaaci(n-2);
}

int main() {
	int n;
	cin >> n;


	int ans = fibonaaci(n);
	cout << ans << endl;
	return 0;
}
