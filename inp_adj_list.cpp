#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m;
  cin>>n>>m;
  //for large n > 10^5
  vector<int> adj[n+1];
  //size N+2E (undirected graph)
  vector< pair<int,int> > dir_adj[n+1];
  //take edges as input
  for (int i = 0; i < m; i++)
  {
      int u,v,w;
      cin>>u>>v>>w;
      //adj[u].push_back(v);
      //adj[v].push_back(u);
      //dir_adj[u].push_back({v,w});
      dir_adj[u].push_back(make_pair(v,w));//node and weight

      //adj[u][v]=1;
      //adj[v][u]=1;
      //cout<<dir_adj[u]<<endl;
  }
  for(int i=1;i<n+1;i++){
    cout<<i<<"->";
    for(auto it:dir_adj[i]){
        cout<<"("<<it.first<<","<<it.second<<"),";
    }
    cout<<"\b"<<endl;
  }
  return 0;

} 