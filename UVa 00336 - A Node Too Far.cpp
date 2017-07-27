#include<bits/stdc++.h>

using namespace std;

vector<int> adj[100000];
queue<int> q;
map<int,int> vis;

int BFS(int s,int ttl)
{
    q.push(s);
    vis[s]=1;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0; i<adj[u].size(); i++)
        {
            int v=adj[u][i];
            if(vis[v]==0)
            {
                q.push(v);
                vis[v]=1+vis[u];
            }
        }
    }
}
map<int ,int> node;
int main()
{
    int nc,u,v,s,ttl,cas=1,nn=0;
    while(scanf("%d",&nc)&&nc)
    {
        nn=0;
        for(int i=0; i<nc; i++)
        {
            scanf("%d%d",&u,&v);
            adj[u].push_back(v);
            adj[v].push_back(u);
            if(node[u]==0)
                {
                    nn++;
                    node[u]=1;
                }
            if(node[v]==0)
            {
                nn++;
                node[v]=1;
            }

        }
        node.clear();
        int cnt=0;
        while(scanf("%d%d",&s,&ttl)&&(s||ttl))
        {
            vis.clear();
            cnt=0;
            BFS(s,ttl);

            for(auto it : vis)
            {
                if(it.second>(ttl+1))
                    ++cnt;
            }
            cnt+=(nn-vis.size());
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",cas++,cnt,s,ttl);
        }
        for(int i=0; i<=100000; i++)
        {
            adj[i].clear();
        }
    }
    return 0;
}
