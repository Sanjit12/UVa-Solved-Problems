#include<bits/stdc++.h>

using namespace std;
map<int,vector<int>> adj;
int vis[2510],cnt;
int M,D;
int BFS(int s)
{
    int cnt=0;
    queue<int > q;
    int in=0;
    q.push(s);
    vis[s]=0;
    int d=1;
    while(!q.empty())
    {
        int size=q.size();
        for(int i=0; i<size; i++)
        {
            int u=q.front();
            q.pop();
            int siz=adj[u].size();
            for(int i=0; i<siz; i++)
            {
                int v=adj[u][i];
                if(vis[v]==-1)
                {
                    q.push(v);
                    vis[v]=1;
                }
            }
        }
        if(q.size()>M)
        {
            M=q.size();
            D=d;
        }
        d++;
    }
}
int main()
{
    int n,f,a,s,tc;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&f);
        for(int j=0; j<f; j++)
        {
            scanf("%d",&a);
            adj[i].push_back(a);
        }
    }
    scanf("%d",&tc);
    while(tc--)
    {
        memset(vis,-1,sizeof vis);
        scanf("%d",&s);
        M=D=0;
        BFS(s);
        if(M)
        cout<<M<< " "<<D<<endl;
        else
            cout<< "0\n";
    }
    return 0;
}
