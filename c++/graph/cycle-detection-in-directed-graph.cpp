#include <bits/stdc++.h>
using namespace std;

class Graph {
public:
  int v;                  // make v public
  list<int> *l;           // adjacency list

  Graph(int V) {
    v = V;
    l = new list<int>[V];
  }

  void addEdge(int u, int v) {
    l[u].push_back(v);
  }

  void printAdjList() {
    for (int i = 0; i < v; i++) {
      cout << i << "->";
      for (auto node : l[i]) {
        cout << node << ",";
      }
      cout << endl;
    }
  }

  bool isCyclicDFS(int curr, vector<bool> &visited, vector<bool> &recStack) {
    visited[curr] = true;
    recStack[curr] = true;

    for (auto nbr : l[curr]) {
      if (!visited[nbr]) {
        if (isCyclicDFS(nbr, visited, recStack)) {
          return true;
        }
      } else if (recStack[nbr]) {
        return true; // Cycle detected
      }
    }

    recStack[curr] = false;
    return false;
  }
};

int main() {
  Graph g(4);

  g.addEdge(0,1);
  g.addEdge(1,2);
  g.addEdge(2,0);
  g.addEdge(2,3);

  g.printAdjList();

  vector<bool> visited(g.v, false);
  vector<bool> recStack(g.v, false);

  bool hasCycle = false;

  for (int i = 0; i < g.v; i++) {
    if (!visited[i]) {
      if (g.isCyclicDFS(i, visited, recStack)) {
        hasCycle = true;
        break;
      }
    }
  }

  if (hasCycle)
    cout << "Graph contains a cycle in directed graph." << endl;
  else
    cout << "Graph does not contain a cycle in directed graph." << endl;

  return 0;
}
