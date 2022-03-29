// approach 1
pair < int , int > findSimilarity(vector < int > arr1, vector < int > arr2, int n, int m) 
{
	pair<int, int> p;
    int countCommon = 0;
    int distElement = 0;
    
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
    
    int i = 0;
    int j = 0;
    
    while(i < n && j < m){
        if(arr1[i] == arr2[j]){
            countCommon++;
            i++; 
            j++;
        }else if(arr1[i] < arr2[j]){
            i++;
        }else{
            j++;
        }
    }
    
        distElement = n + m - countCommon;
        
        p.first = countCommon;
        p.second = distElement;
        
        return p;
}
