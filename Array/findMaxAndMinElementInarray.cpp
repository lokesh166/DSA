long long int minEle = INT_MAX;
    long long int maxEle = INT_MIN;
    
    
    
     Pair p=new Pair<first,second>();
     p.first = arr[0];
     p.second = arr[0];
    
    int i = 0;
    while(i<n){
        if(arr[i] > maxEle){
            maxEle = arr[i];
        }
         if(arr[i] < minEle){
            minEle = arr[i];
        }
    }
    
    p.first = minEle;
    p.second = maxEle;
    
    return p;
