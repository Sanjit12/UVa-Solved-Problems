#include<bits/stdc++.h>

using namespace std;
map<char,int> vis;

int DFS(int u,map<int ,vector<int>> adj)
{
    vis[u]=1;
    for(int i=0;i<adj[u].size();i++)
    {
        int v=adj[u][i];
        if(vis[v]==0)
        {
            DFS(v,adj);
        }
    }
}
int main()
{
    int n,f=0;
    char m;
    string s;
    scanf("%d",&n);
    getchar();
    getchar();
    while(n--)
    {
        if(f)
            printf("\n");

        f=1;
        map<char,int> node;
        map<int ,vector<int>> adj;
        scanf("%c",&m);
        for(int i='A';i<=m;i++)
        {
            node[i]=1;
        }
        getchar();
        while(getline(cin,s))
        {
            if(s.length()==0)
                break;
            adj[s[0]].push_back(s[1]);
            adj[s[1]].push_back(s[0]);
        }
        int cnt=0;
        for(int i='A';i<='Z';i++)
        {
            if(vis[i]==0&&node[i]==1)
            {
                DFS(i,adj);
                cnt++;
            }
        }
        printf("%d\n",cnt);
        vis.clear();
    }
    return 0;
}

