#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m;
  cin>>n>>m;
  //for large n > 10^5
  vector<int> adj[n+1];
 
  for (int i = 0; i < m; i++)
  {
      int u,v;
      cin>>u>>v;
      adj[u].push_back(v);
      //adj[v].push_back(u);
      //dir_adj[u].push_back({v,w});
      //dir_adj[u].push_back(make_pair(v,w));//node and weight

      //adj[u][v]=1;
      //adj[v][u]=1;
  }
  /*
  for(int i=1;i<n+1;i++){
      cout<<i<<" -> ";
    for(auto it:adj[i]){
        cout<<it<<",";
    }
    cout<<endl;
  }
  */

  return 0;

} 