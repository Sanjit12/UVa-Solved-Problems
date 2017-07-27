#include<iostream>
#include<cstring>
#include<cstdio>
#include<queue>

#define p 200

using namespace std;
int graph[p][p];
int isBicolorable(int l,int n)
{
    int color[l];
    memset(color,-1,sizeof(color));
    color[0]=1;

    queue<int> q;
    q.push(0);

    while(!q.empty())
    {
        int m=q.front();
        q.pop();
        for(int i=0;i<n;i++)
        {
            if(graph[m][i]&&color[i]==-1)
            {
                color[i] = 1-color[m];
                q.push(i);
            }
            else if(graph[m][i] && color[i] == color[m])
                return 0;
        }
    }
    return 1;
}
int main()
{
    int l,i,j,a,b,n;
    while(scanf("%d",&n)==1&&n)
    {
        memset(graph,0,sizeof(graph));
        scanf("%d",&l);
        for(i=0;i<l;i++)
        {
            scanf("%d%d",&a,&b);
            graph[a][b]=1;
            graph[b][a]=1;
        }
        if(isBicolorable(l,n))
        {
            printf("BICOLORABLE.\n");
        }
        else
        {
            printf("NOT BICOLORABLE.\n");
        }
    }

    return 0;
}
