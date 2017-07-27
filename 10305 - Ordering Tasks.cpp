#include<bits/stdc++.h>

using namespace std;

map<int,int> vis;

stack<int> ts;

int DFS(int u,map<int, vector<int>> adj)
{
    vis[u]=1;
    for(int i=0; i<adj[u].size(); i++)
    {
        int v=adj[u][i];

        if(vis[v]==0)
        {
            DFS(v,adj);
        }
    }
    ts.push(u);
}
int main()
{
    int n,u,v,e;
    while((cin>>n>>e))
    {
        if(n==0&&e==0)
            break;
        map<int, vector<int>> adj;
        for(int i=0; i<e; i++)
        {
            cin>>u>>v;
            adj[u].push_back(v);
        }
        for(int i=1; i<=n; i++)
        {
            if(vis[i]==0)
            {
                DFS(i,adj);
            }
        }
        while(ts.size()>1)
        {
            cout<<ts.top()<< " ";
            ts.pop();
        }
        if(ts.size())
        {
            cout<<ts.top();
            ts.pop();
        }
        cout<<endl;
        vis.clear();
    }
    return 0;
}
