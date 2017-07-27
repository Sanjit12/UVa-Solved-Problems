#include<bits/stdc++.h>

using namespace std;

map<string,string> p;
map<string,int> vis;

int BFS(string s,string f,map<string,vector<string>> adj)
{
    queue<string> q;
    q.push(s);
    vis[s]=0;
    p[s]="NULL";
    while(!q.empty())
    {
        string u=q.front();
        q.pop();
        if(u==f)
        {
            return vis[u];
        }
        int size=adj[u].size();
        for(int i=0; i<size; i++)
        {
            string v=adj[u][i];
            if(vis[v]==0)
            {
                vis[v]=1;
                p[v]=u;
                q.push(v);
            }
        }
    }
    return 0;
}

void print_path(string s,string v)
{
    if(s==v)
    {
        return;
    }
    print_path(p[s],v);
    cout<<p[s]<<" "<<s<<endl;
}
int main()
{
    int n,fi=false;
    while(scanf("%d",&n)==1)
    {
        map<string,vector<string>> adj;
        string u,v;
        while(n--)
        {
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
            p[u]="NULL";
            p[v]="NULL";
            vis[u]=0;
            vis[v]=0;
        }
        cin>>u>>v;
        int f=BFS(u,v,adj);
        if(fi) printf ("\n");
        fi = true;
        if(f)
        print_path(v,u);
        else
            cout<<"No route"<<endl;
        vis.clear();
        p.clear();
    }
    return 0;
}

