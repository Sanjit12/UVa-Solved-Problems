#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll n,m;
ll multiply(ll F[2][2],ll M[2][2])
{
    ll w =( ((F[0][0]%m)*(M[0][0]%m))%m + ((F[0][1]%m)*(M[1][0]%m))%m ) %m;
    ll x =( ((F[0][0]%m)*(M[0][1]%m))%m + ((F[0][1]%m)*(M[1][1]%m))%m ) %m;
    ll y =( ((F[1][0]%m)*(M[0][0]%m))%m + ((F[1][1]%m)*(M[1][0]%m))%m ) %m;
    ll z =( ((F[1][0]%m)*(M[0][1]%m))%m + ((F[1][1]%m)*(M[1][1]%m))%m ) %m;

    F[0][0] = w%m;
    F[0][1] = x%m;
    F[1][0] = y%m;
    F[1][1] = z%m;
}
ll power(ll F[2][2],ll n)
{
    if(n==0||n==1)
    {
        return 0;
    }
    ll M[2][2]={{1,1},{1,0}};
    power(F,n/2);
    multiply(F,F);
    if(n%2==1)
    {
        multiply(F,M);
    }
    return 0;
}

int main()
{
    //freopen("in.txt", "r", stdin);
    while(scanf("%d%d",&n,&m)==2)
    {
        ll F[2][2]={{1,1},{1,0}};
        m = powl(2,m);
        power(F,n-1);
        if(n==0)
        {
            printf("0\n");
        }
        else
            printf("%d\n",F[0][0]%m);
    }
    return 0;
}

