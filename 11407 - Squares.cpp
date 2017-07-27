#include<bits/stdc++.h>
using namespace std;
int dp[10005];
int solve(int n)
{
    if(dp[n]!=0)
        return dp[n];
    if(n==0)
    {
        return 0;
    }
    int m=500,sq=sqrt(n);
    for(int i=1;i<=sq;i++)
    {
        m=min(m,1+solve(n-i*i));
    }
    return dp[n]=m;
}
int main()
{
    int t,n;
    scanf("%d",&t);
    solve(10002);
    while(t--)
    {
        scanf("%d",&n);
        printf("%d\n",dp[n]);
    }
    return 0;
}
