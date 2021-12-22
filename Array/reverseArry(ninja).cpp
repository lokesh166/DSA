void reverseArray(vector<int> &arr , int m)
{
	// Write your code here.
    int start = m+1;
    int end = arr.size()-1;
    
    for(int i=start; i<=end; i++){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
