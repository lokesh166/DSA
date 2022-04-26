//   using adjancy matrix

#include<iostream>
using namespace std;


class Graph{

private:
    bool **adjMatrix;
    int numVertices;



    public:
    // create a constructor
    Graph(int numVertices){
        this->numVertices = numVertices;
        adjMatrix = new bool*[numVertices];

        for(int i=0; i<numVertices; i++){
            adjMatrix[i] = new bool[numVertices];
            for(int j=0; j<numVertices; j++){
                adjMatrix[i][j] = false;
            }
        }

    }

    // Add edges
  void addEdge(int i, int j) {
    adjMatrix[i][j] = true;
    adjMatrix[j][i] = true;
  }

  // Remove edges
  void removeEdge(int i, int j) {
    adjMatrix[i][j] = false;
    adjMatrix[j][i] = false;
  }


  // Print the martix
  void toString() {
    for (int i = 0; i < numVertices; i++) {
      cout << i << " : ";
      for (int j = 0; j < numVertices; j++)
        cout << adjMatrix[i][j] << " ";
      cout << "\n";
    }
  }

  ~Graph() {
    for (int i = 0; i < numVertices; i++)
      delete[] adjMatrix[i];
    delete[] adjMatrix;
  }

};




int main(){


    Graph g(4);

  g.addEdge(0, 1);
  g.addEdge(0, 2);
  g.addEdge(0, 3);
  g.addEdge(1, 2);
//   g.addEdge(2, 3);

  g.toString();


    return 0;
}











// using adjancy list



#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;
template <typename T>

class graph{

public:
    unordered_map<T, list<T> > adj;

    void addEdge(T u, T v, bool direction){
        // direction = 0 -> undirected graph
        // direction = 1 -> directed graph

        adj[u].push_back(v);

        if(direction == 0){
            adj[v].push_back(u);
        }
    }

    void printList(){
        for(auto i:adj){
            cout << i.first << "->";
            for(auto j:i.second){
                cout << j << ", ";
            }cout << endl;
        }
    }
};

int main(){

    int n;
    cout << "Enter the number of nodes " << endl;
    cin >> n;

    int m;
    cout << "Enter the number of edges " << endl;
    cin >> m;

    graph<int>  g;

    for(int i=0; i<m; i++){
        int u, v;
        cin >> u >> v;
        

        // creating a undirected graph
        g.addEdge(u, v, 0);
    }

    // printing graph

    g.printList();

    return 0;
}
