#include <stdio.h>
typedef long long ll;
ll num[100000006];
ll count(ll n)
{
    if(n<=100000000)
    {
        return num[n];
    }
    int k=count(n/2);
    if(n&1)
    {
        return k+1;
    }
    else
    {
        return k;
    }
}
int main()
{
    ll i,n,cas;
    num[0]=0;
    for(i=1; i<=100000000; i++) num[i]=num[i/2]+(i%2);
    scanf("%lld",&cas);
    while(cas--)
    {
        scanf("%lld",&n);
        printf("%lld\n",count(n));
    }
    return 0;
}
