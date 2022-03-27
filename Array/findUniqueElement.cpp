int findUnique(int *arr, int size)
{
    int ans = 0;
    for(int i = 0; i<size; i++) {
        
//         xor means if we xor same the output is 0 
//         4 ^ 4 = 0
//         0 ^ 1 = 1
        ans = ans^arr[i];
    }
    return ans;
}
