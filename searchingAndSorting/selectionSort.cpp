#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
// 	    below function only how to sorting is done by printing arr
//             for(int i=0; i<6; i++){
//             cout << arr[i] << " ";
//             }cout << endl;
// 	
        int min = i;
        for(int j=i+1; j<n; j++){
            if(arr[min] > arr[j]){
                min = j;
            }
        }
        swap(arr[min], arr[i]);
    }
}

int main(){


    int arr[] = {4,9,10,2,1,5};

    selectionSort(arr, 6);

    for(int i=0; i<6; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
