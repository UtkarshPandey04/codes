#include<bits/stdc++.h>
using namespace std;
class Graph{
  int v;
  list<int> *l; // adjacency list
public:
  Graph(int V){
    this->v = V;
    l = new list<int>[V];
  } 
  void addEdge(int u,int v){
    l[u].push_back(v);
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
  void topologicalSortUtil(int node, vector<bool> &visited, stack<int> &Stack) {
    visited[node] = true;
    for (auto nbr : l[node]) {
      if (!visited[nbr]) {
        topologicalSortUtil(nbr, visited, Stack);
      }
    }
    Stack.push(node);
  }
  void topologicalSort() {
    stack<int> Stack;
    vector<bool> visited(v, false);
    for (int i = 0; i < v; i++) {
      if (!visited[i]) {
        topologicalSortUtil(i, visited, Stack);
      }
    }
    cout << "Topological Sort Order: ";
    while (!Stack.empty()) {
      cout << Stack.top() << " ";
      Stack.pop();
    }
    cout << endl;
  }
};
int main() {
  Graph g(6);
  g.addEdge(5, 2);
  g.addEdge(5, 0);
  g.addEdge(4, 0);
  g.addEdge(4, 1);
  g.addEdge(2, 3);
  g.addEdge(3, 1);

  g.printAdjList();

  g.topologicalSort();
  return 0;
}

 