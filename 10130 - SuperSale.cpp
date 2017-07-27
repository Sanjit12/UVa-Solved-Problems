#include<bits/stdc++.h>
using namespace std;

int ks(int W,int p[],int wt[],int n,int tot[],int g)
{
    int k[n+1][W+1];

    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=W;j++)
        {
            if(i==0||j==0)
            {
                k[i][j]=0;
            }
            else if(wt[i-1]<=j)
            {
                k[i][j] = max(p[i-1]+k[i-1][j-wt[i-1]],k[i-1][j]);
            }
            else
            {
                k[i][j] = k[i-1][j];
            }
        }
    }
    int sum=0;
    for(int i=0;i<g;i++)
    {
        sum+=k[n][tot[i]];
    }
    return sum;
}

int main()
{
    int t,n,g,W[101];
    int p[1005];
    int w[1005];
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);

        for(int i=0;i<n;i++)
        {
            scanf("%d%d",&p[i],&w[i]);
        }
        int sum=0,m=-1;
        scanf("%d",&g);
        for(int i=0;i<g;i++)
        {
            scanf("%d",&W[i]);
            m = max(W[i],m);
        }
        sum = ks(m,p,w,n,W,g);
        printf("%d\n",sum);
    }

    return 0;
}
