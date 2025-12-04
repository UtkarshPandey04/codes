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

  bool isCycleUtil(int node, vector<bool> &visited, int parent) {
    visited[node] = true;
    list<int> neighbors = l[node];
    for (auto nbr : neighbors) {
      if (!visited[nbr]) {
        if (isCycleUtil(nbr, visited, node)) {
          return true;
        }
      } else if (nbr != parent) {
        return true; // Cycle detected
      }
    }
    return false;
  }
  bool isCycle() {
    vector<bool> visited(v, false);
    for (int i = 0; i < v; i++) {
      if (!visited[i]) {
        if (isCycleUtil(i, visited, -1)) {
          return true;
        }
      }
    }
    return false;
  }
};
int main() {
  Graph g(5);
  g.addEdge(0,1);
  g.addEdge(0,2); 
  g.addEdge(0,3);
  g.addEdge(1,2);
  g.addEdge(3,4);  

  g.printAdjList();

  cout << "Cycle Detection using DFS: ";
  cout<< g.isCycle() << endl;
  return 0;
}