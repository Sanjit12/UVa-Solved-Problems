#include<bits/stdc++.h>
using namespace std;

int vis[30005];
vector<int > g[30005];
int cnt=0;
int dfs(int u)
{
    if(vis[u])
        return 0;
    cnt++;
    int v;
    vis[u]= 1;
    for(int i=0;i<g[u].size();i++)
    {
        v=g[u][i];
        if(vis[v]==0)
        {
            dfs(v);
        }
    }
    return cnt;
}
int main()
{
    int n,e,tc,u,v;
    scanf("%d",&tc);
    while(tc--)
    {
        memset(vis,0,sizeof vis);
        scanf("%d%d",&n,&e);
        for(int i=0;i<e;i++)
        {
            scanf("%d%d",&u,&v);
            g[u].push_back(v);
            g[v].push_back(u);
        }
        int m=-1;
        for(int i=1;i<=n;i++)
        {
            cnt=0;
            m=max(m,dfs(i));
        }
        cout<<m<<endl;
        for(int i=0;i<n;i++)
        {
            g[i].clear();
        }
    }
    return 0;
}
