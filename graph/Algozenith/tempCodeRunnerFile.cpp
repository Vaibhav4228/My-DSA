// dfs algorith

#include <bits/stdc++.h>
using namespace std;

int n,m;
vector<int>temp;
vector<vector<int>> g;
vector<int> vis;

void dfs(int node){
  temp.push_back(node);
  vis[node] =1;
  for(auto v: g[node]){ //all node reachable with 1 then marked as visited
   
   //aur jha jha node ko reach nhi krra hai avi tak then
   if(!vis[node]){
    dfs(v);
   }

  }
}


int main(){
  cin>>n>>m;
  g.resize(n+1);
  for(int i = 0; i < n; i++){
    int a,b;
    cin>>a>>b;
    //for directed
    g[a].push_back(b);

    //for undirected
    // g[b].push_back(a);
  }
  vis.assign(n+1, 0);

  dfs(1);

  for(int i = 0; i < n; i++){
    cout<<i<<" "<<vis[i]<<endl;

  }
  for(auto v: temp){
    cout<<v<<" ";
  }
}


