#include<bits/stdc++.h>

#define inf 1000000

using namespace std;

int main()
{
    int u,v,m,cas=1;
    int G[101][101],con[101];
    while(scanf("%d%d",&u,&v),u,v)
    {
        m=0;
        for(int i=1; i<=100; i++)
        {
            for(int j=1; j<=100; j++)
            {
                G[i][j]=inf;
            }
            con[i]=0;
        }
        m=(max(m,max(u,v)));
        G[u][v]=1;
        con[u]=con[v]=1;

        while(scanf("%d%d",&u,&v),u,v)
        {
            G[u][v]=1;
            m=(max(m,max(u,v)));
            con[u]=con[v]=1;
        }
        for(int k=1; k<=m; k++)
            for(int i=1; i<=m; i++)
                for(int j=1; j<=m; j++)
                    if(G[i][k]+G[k][j]<G[i][j])
                    {
                        G[i][j]=G[i][k]+G[k][j];
                    }
        int sum=0,cnt=0;
        for(int i=1; i<=m; i++)
        {
            for(int j=1; j<=m; j++)
            {
                if(i!=j&&con[i]&&con[j])
                {
                    sum+=G[i][j];
                }
            }
            if(con[i])
                cnt++;
        }
        m=cnt;
        float p=float(sum);
        float l=float(m*(m-1));
        printf("Case %d: average length between pages = %.3f clicks\n",cas++,p/l);
    }
    return 0;
}
