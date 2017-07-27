#include<bits/stdc++.h>

using namespace std;

#define inf 10000000

int main()
{
    int tc,n,m,u,v,w;
    scanf("%d",&tc);
    while(tc--)
    {
        map<int ,vector<pair<int,int>>> adj;
        scanf("%d%d",&n,&m);
        vector<int> d(n+1,inf);
        for(int i=0; i<m; i++)
        {
            scanf("%d%d%d",&u,&v,&w);
            adj[u].push_back(make_pair(v,w));
        }
        d[0]=0;
        for(int i=0; i<n-1; i++)
        {
            for(int j=0; j<n; j++)
            {
                for(int k=0; k<adj[j].size(); k++)
                {
                    pair<int,int> p=adj[j][k];
                    d[p.first]=min(d[p.first],d[j]+p.second);
                }
            }
        }
        int nc=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<adj[i].size(); j++)
            {
                pair<int,int> p=adj[i][j];
                if(d[p.first]>(d[i]+p.second))
                {
                    nc=1;
                    break;
                }
            }
        }
        if(nc)
        {
            printf("possible\n");
        }
        else
        {
            printf("not possible\n");
        }
    }
    return 0;
}
