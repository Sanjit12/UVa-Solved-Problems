#include<bits/stdc++.h>

using namespace std;

#define inf 100000

int G[101][101],vis[101];
queue<int> q;
int n,v,a;
int DFS(int u)
{
    for(int i=1; i<=n; i++)
    {
        if(G[u][i]&&!vis[i])
        {
            vis[i]=1;
            DFS(i);
        }
    }
}
int main()
{
    int u;
    for(; scanf("%d",&n)&&n;)
    {
        memset(G,0,sizeof(G));

        for(; scanf("%d",&u)&&u;)
        {
            for(; scanf("%d",&v)&&v;)
            {
                G[u][v]=1;
            }
        }
        scanf("%d",&a);
        int cnt=0;
        for(int i=0; i<a; i++)
        {
            cnt=0;
            scanf("%d",&v);
            memset(vis, 0, sizeof(vis));
            DFS(v);
            for(int j=1; j<=n; j++)
            {
                if(!vis[j])
                {
                    cnt++;
                    q.push(j);
                }
            }
            if(cnt==0)
                {
                    printf("0\n");
                    continue;
                }
            else
                printf("%d ",cnt);
            while(q.size()>1)
            {
                printf("%d ",q.front());
                q.pop();
            }
            if(q.size()==1)
            {
                printf("%d",q.front());
                q.pop();
            }
            printf("\n");
        }
    }
    return 0;
}
