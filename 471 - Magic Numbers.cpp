#include<bits/stdc++.h>
using namespace std;

#define max 9876543210
#define ll long long

int check(ll n)
{
    int f=0,d;
    while(n)
    {
        d=n%10;
        if(f&(1<<d))
            return 0;
        f|=(1<<d);
        n/=10;
    }
    return 1;
}
int main()
{
    ll n,k=0,N;

    scanf("%d",&n);

    while(n--)
    {
        if(k)
            printf("\n");
        k=1;
        scanf("%lld",&N);
        ll m = max/N;

        for(ll i=1;i<=m;i++)
        {
            if(check(i)&&check(i*N))
            {
                printf("%lld / %lld = %lld\n",i*N,i,N);
            }
        }
    }
    return 0;
}
