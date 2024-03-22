// leet code - 1971// class Solution {
//   bool dfs(vector<vector<bool>>& graph, int src, int dest, vector<bool>& vis, int n) {
//     if (src == dest) return true;
//     vis[src] = true;
//     for (int i = 0; i < n; i++) {
//       if (graph[src][i] && !vis[i]) {
//         if (dfs(graph, i, dest, vis, n))
//           return true;
//       }
//     }
//     return false;
//   }


// public:
//   bool validPath(int n, vector<vector<int>>& edges, int source,
//     int destination) {
//     vector<vector<bool>> graph(n, vector<bool>(n, false));
//     for (auto edge : edges) {
//       int u = edge[0], v = edge[1];
//       graph[u][v] = true;
//       graph[v][u] =
//         true; // why true becuse this is a bi directional graph
//     }
//     vector<bool> vis(n, false);
//     return dfs(graph, source, destination, visited, n);
//   }

// };

// using bfs on - adjency matrix
// used bfs on adjency matrix getting tle bcs of sparse matrix

// class Solution {
// public:
//   bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
//     vector<vector<bool>> graph(n, vector<bool>(n, false));
//     for (auto edge : edges) {
//       int u = edge[0], v = edge[1];
//       graph[u][v] = true;
//       graph[v][u] =
//         true;
//     }
//     queue<int>q;
//     q.push(source);

//     vector<bool> vis(n, false);
//     vis[source] = true;

//     while (!q.empty()) {
//       int curr = q.front();
//       q.pop();

//       if (curr == destination) return true;

//       for (int i = 0; i < n; i++) {
//         if (graph[curr][i] && !vis[i]) {
//           q.push(i);
//           vis[i] = true;
//         }
//       }
//     }
//     return false;
//   }
// };

