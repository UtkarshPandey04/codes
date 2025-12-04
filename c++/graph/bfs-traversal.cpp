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
  void bfs(){
    queue<int> Q;
    vector<bool> visited(v,false);
    Q.push(0);
    visited[0]=true;
    while(!Q.empty()){
      int node = Q.front();
      Q.pop();
      cout << node << " ";
      for(auto nbr : l[node]){
        if(!visited[nbr]){
          Q.push(nbr);
          visited[nbr] = true;
        }
      }
    }
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

  cout << "BFS Traversal: ";
  g.bfs();
  return 0;
}