// gfg code  



vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int> ans;
        vector<int> vis(V,0);
        queue<int> q;
        
        q.push(0);
        vis[0] = 1;
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            ans.push_back(node);
            
            for(auto it:adj[node]){
                if(!vis[it]){
                    q.push(it);
                    vis[it] = 1;
                }
            }
        }
        return ans;
  
  
  
  
  
  
  
  
  
  
//   code studio
  
  
  #include<unordered_map> 
#include<queue> 
#include<set>
void prepareList(unordered_map<int, set<int> > &adjList, vector<pair<int, int>> &edges) {
	for(int i=0; i<edges.size(); i++){
		int u = edges[i].first;
		int v = edges[i].second;
		
		adjList[u].insert(v);
		adjList[v].insert(u);
	}
}

void bfs(unordered_map<int, set<int> > &adjList, unordered_map<int, bool> &visited,
		 vector<int> &ans, int node ) {
	queue<int> q;
	q.push(node);
	visited[node] = 1;
	
	while(!q.empty()){
		int frontNode = q.front();
		q.pop();
		
// 		store the front node into ans
		ans.push_back(frontNode);
		
// 		traverse all neighbours of frontNode in adjList
		for(auto it:adjList[frontNode]){
			if(!visited[it]) {
				q.push(it);
				visited[it] = 1;
			}
		}
	}
}


vector<int> BFS(int vertex, vector<pair<int, int>> edges)
{
    unordered_map<int, set<int> > adjList;
	vector<int> ans;
	unordered_map<int, bool> visited;
	
	prepareList(adjList, edges);
	
// 	traversal all components of graph
	for(int i=0; i<vertex; i++) {
		if(!visited[i]){
			bfs(adjList, visited, ans, i);
		}
	}
	
	return ans;
}
