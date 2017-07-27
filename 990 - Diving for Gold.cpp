#include<bits/stdc++.h>
using namespace std;

int n,w,d,v,t;
int di[35],wt[35],val[35];
int dp[1001][31];
int knap(int W,int m)
{
    int table[m+1][W+1];
    for(int i=0; i<=m; i++)
    {
        for(int j=0; j<=W; j++)
        {
            if(i==0||j==0)
            {
                table[i][j]=0;
            }
            else if(j<wt[i-1])
            {
                table[i][j] = table[i-1][j];
            }
            else
            {
                table[i][j] = max(val[i-1]+table[i-1][j-wt[i-1]],table[i-1][j]);
            }
        }
    }
    cout<<table[m][W]<<endl;
    vector<pair<int,int>> pa;
    while(table[m][W]>0)
    {
        if(table[m][W]==table[m-1][W])
        {
            m--;
        }
        else
        {
            pa.push_back(make_pair(di[m-1],val[m-1]));
            m--;
            W-=wt[m];
        }
    }
    cout<<pa.size()<<endl;
    pair<int,int> it;
    for(int i=pa.size()-1;i>=0;i--)
    {
        it = pa[i];
        cout<<it.first<< " "<<it.second<<endl;
    }
}
int main()
{
    int f=0;
    while(scanf("%d%d",&t,&w)==2)
    {
        if(f)
            cout<<endl;
        f=1;
        memset(dp,-1,sizeof(dp));
        scanf("%d",&n);
        for(int i=0; i<n; i++)
        {
            scanf("%d%d",&di[i],&val[i]);
            wt[i]=(w*di[i])+(2*w*di[i]);
        }
        knap(t,n);
    }
    return 0;
}
