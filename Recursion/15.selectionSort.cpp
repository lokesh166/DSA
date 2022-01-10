#include<bits/stdc++.h>

using namespace std;

void selectionSort(int *arr, int s, int e){

	// base case
	if(s > e) return;

	for(int i=0; i< e-1; i++){
		int minIndex = i;
		for(int j=i+1; j<e; j++){
			if(arr[minIndex] > arr[j]) {
				minIndex = j;
			}
		}
		swap(arr[minIndex], arr[i]);
	}

	selectionSort(arr, s+1, e);
}


int main(){

	int arr[15] = {3,7,0,1,5,8,3,2,34,66,87,23,12,12,12};
    int n = 15;

    selectionSort(arr, 0, n);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    } cout << endl;

	return 0;
}
