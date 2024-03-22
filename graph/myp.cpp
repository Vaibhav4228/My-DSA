#include <bits/stdc++.h>
using namespace std;

class graph {
public:
  unordered_map<int, list<int>> adjList;

  void addEdge(int u, int v, bool direction) {
    if (direction == 1) {
      // u se v ki edge hai
      // u -> v
      adjList[u].push_back(v);
    }
    else {
      // direction = 0;
      // u->v;
      adjList[u].push_back(v);
      // v->u
      adjList[v].push_back(u);
    }
    cout << endl << "Printing edges" << endl;
  }

  void printAdjList() {
    for (auto i : adjList) {
      cout << i.first << " ->";
      for (auto negi : i.second) {
        cout << negi << " , ";
      }
      cout << " } " << endl;
    }
  }
};

int main() {
  graph g;
  g.addEdge(0, 1, 1);
  g.printAdjList();

  return 0;
}

//my graph code
// #include<bits/stdc++.h>
// using namespace std;
// void addEdge(vector<int>adj[], int u, int v) {
//   adj[u].push_back(v);
//   adj[v].push_back(u);
// }
// void print(vector<int> adj[], int v) {
//   for (int i = 0; i < v; i++) {
//     for (auto x : adj[i]) {
//       cout << x << " ";
//     }
//     cout << endl;
//   }
// }

// int main() {
//   int v = 4;
//   vector<int> adj[v];
//   addEdge(adj, 0, 1);
//   addEdge(adj, 0, 2);
//   addEdge(adj, 1, 2);
//   addEdge(adj, 2, 3);
//   print(adj, v);
//   return 0;
// }