#include<bits/stdc++.h>

using namespace std;
map<char,int> vis;
map<char,vector<char>> adj;
stack<char> ts;
int DFS(char u)
{
    vis[u]=1;
    for(int i=0; i<adj[u].size(); i++)
    {
        char v=adj[u][i];
        if(vis[v]==0)
        {
            DFS(v);
        }
    }
    ts.push(u);
}
int main()
{
    string p,n;

    map<char,int> node;
    while(cin>>n&&n!="#")
    {
        for(int i=0; i<n.length()&&i<p.length(); i++)
        {
            if(n[i]!=p[i])
            {
                node[p[i]]=1;
                node[n[i]]=1;
                adj[p[i]].push_back(n[i]);
                break;
            }
        }
        p=n;
    }
    for(int i=0; i<26; i++)
    {
        if(vis[i+'A']==0&&node[i+'A']==1)
        {
            DFS(i+'A');
        }
    }
    while(!ts.empty())
    {
        cout<<ts.top();
        ts.pop();
    }
    cout<<endl;
    return 0;
}
