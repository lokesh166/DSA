void toh(int n, int a, int b, int c, vector<vector<int>>& ans){
	if(n==0) return;
    toh(n-1, a, c, b, ans);
    ans.push_back({a,c});
    toh(n-1, b, a, c, ans);
}



// this is write by the question statement
vector<vector<int>> towerOfHanoi(int n)
{
    //    Write your code here.
    vector<vector<int>> ans;
    if(n == 0) return ans;
    
    toh(n,1,2,3,ans);
    return ans;
    
}
