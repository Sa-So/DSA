#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
        //no. of nodes and adj list
        vector<int> bfsOfGraph(int V,vector<int> adj[]){
            vector<int> bfs;
            vector<int> vis(V+1,0);

            for(int i=1;i<=V;i++){
                if(!vis[i]){

                    //bfs(i)
                    queue<int> q;
                    q.push(i);
                    vis[i]=1;
                    while (!q.empty())
                    {
                        int node = q.front();
                        q.pop();
                        bfs.push_back(node);

                        //add children to queue

                        for(auto it:adj[node]){
                            if(!vis[it]){
                                q.push(it);
                                vis[it]=1;
                            }
                        }
                        //now traverse the queue
                    }
                    
                }
            }
            return bfs;
        }
};
int main()
{
    int n, m;
    cin >> n >> m;
    
    vector<int> adj[n + 1];

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    Solution G;
    vector<int> A = G.bfsOfGraph(n, adj);
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}