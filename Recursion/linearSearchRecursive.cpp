#include<bits/stdc++.h>
using namespace std;

// linear search using recursion

bool linearSearch(int arr[], int n, int key){
	// base case;
	if(n == 0) {
		return false;
	}
	if(arr[0] == key){
		return true;
	}
	bool remainingPart = linearSearch(arr+1, n-1, key);
	return remainingPart;
}

int main(){

	int arr[] = {5,9,2,10,6,45,20};
	int key;
	bool ans = linearSearch(arr, 7, 45);
	cout << ans;
	return 0;
}
