#include<bits/stdc++.h>
using namespace std;
class Graph{
  int v;
  list<int> *l; // int *arr
public:
  Graph(int V){
    this->v = V;
    l = new list<int>[V];
  }
  void addEdge(int u,int v){
    l[u].push_back(v);
    l[v].push_back(u);
  }
  void printAdjList(){
    for(int i=0;i<v;i++){
      cout<<i<<"->";
      for(auto node:l[i]){
        cout<<node<<",";
      }
      cout<<endl;
    }
  }
  void dfsHelper(int node, vector<bool> &visited) {
    visited[node] = true;
    cout << node << " ";
    for (auto nbr : l[node]) {
      if (!visited[nbr]) {
        dfsHelper(nbr, visited);
      }
    }
  }
  void dfs(int start) {
    vector<bool> visited(v, false);
    dfsHelper(start, visited);
    // In case of disconnected graph, we can call dfsHelper for all nodes
    // for(int i = 0; i < v; i++) {
    //   if (!visited[i]) {
    //     dfsHelper(i, visited);
    //   }
    // }
  }
};
int main() {
  Graph g(5);
  g.addEdge(0,1);
  g.addEdge(1,2); 
  g.addEdge(1,3);
  g.addEdge(2,3);
  g.addEdge(2,4);  

  g.printAdjList();

  cout << "DFS Traversal: ";

  g.dfs(0);
  return 0;
} 