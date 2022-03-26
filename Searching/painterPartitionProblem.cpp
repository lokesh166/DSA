bool ispossible(vector<int> &boards, int k, int mid){

   int painter = 1;
   int n = boards.size();
   int boardsum = 0;

   for(int i=0; i<n; i++){
       if(boardsum + boards[i]<=mid){
           boardsum += boards[i];
       }
       else{
           painter+=1;
           if(painter>k || boards[i]>mid){
               return false;
           }
           boardsum = boards[i];
       }
   }
   return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
   int s = 0;
   int n = boards.size();
   int sum = 0;

   for(int i=0; i<n; i++){
       sum+=boards[i];
   }
    
   int e = sum;
   int ans = -1;
   int mid = s + (e-s)/2;

   while(s<=e){
       if(ispossible(boards,k,mid)){
           ans = mid;
           e = mid - 1;
       }
       else{
           s = mid + 1;
       }
       mid = s + (e-s)/2;
   }
   return ans;
}
