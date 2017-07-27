#include<bits/stdc++.h>

using namespace std;
map<string,int> vis;
int BFS(string s,string f,map<string,vector<string>> adj)
{
    queue<string> q;
    q.push(s);
    vis[s]=0;
    while(!q.empty())
    {
        string u=q.front();
        q.pop();
        int d=vis[u];
        int siz=(int)adj[u].size();
        for(int i=0;i<siz;i++)
        {
            string v=adj[u][i];
            if(vis[v]==0)
            {
                q.push(v);
                vis[v]=1+vis[u];
            }
        }
    }
}
int main()
{
    int t,n,e,s,ship,cas=1;
    string node,u,v;
    scanf("%d",&t);
    printf("SHIPPING ROUTES OUTPUT\n\n");
    while(t--)
    {
        map<string,vector<string>> adj;
        scanf("%d%d%d",&n,&e,&s);
        for(int i=0;i<n;i++)
        {
            cin>>node;
            vis[node]=0;
        }
        for(int i=0;i<e;i++)
        {
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        printf("DATA SET  %d\n\n",cas++);
        for(int i=0;i<s;i++)
        {
            vis.clear();
            cin>>ship>>u>>v;
            BFS(u,v,adj);
            if(vis[v]==0)
            {
                printf("NO SHIPMENT POSSIBLE\n");
            }
            else
            {
                printf("$%d\n",vis[v]*ship*100);
            }
        }
        if(t)
        printf("\n");
    }
    printf("\nEND OF OUTPUT\n");
    return 0;
}
