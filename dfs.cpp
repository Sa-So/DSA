#include<bits/stdc++.h>
using namespace std;
class Solution
{
    void dfs(int node,vector<int> &vis,vector<int> adj[],vector<int> &storeDfs){
        storeDfs.push_back(node);
        vis[node]=1;
        //adj[node] is the list of all children of node
        for(auto it : adj[node]){
            if(!vis[it]){
                dfs(it,vis,adj,storeDfs);
            }
        }
    }
    public:
        //no. of nodes and adj list
        vector<int> dfsOfGraph(int V,vector<int> adj[]){
            vector<int> storeDfs;
            vector<int> vis(V+1,0);

            for(int i=1;i<=V;i++){
                if(!vis[i]){
                    dfs(i,vis,adj,storeDfs);
                }
            }
            return storeDfs;
        }
};
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
     
  }
  Solution G;
  vector<int> A = G.dfsOfGraph(n,adj);
  for (int i = 0; i < n; i++)
  {
      cout<<A[i]<<" ";
  }
  
  return 0;

} 


