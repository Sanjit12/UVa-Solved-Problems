#include<bits/stdc++.h>
using namespace std;

#define in freopen("in.txt", "r", stdin)
#define out freopen("out.txt", "w", stdout)

long long limit=2147483650;
long long prime[47000];
vector<long long> prm;
long long sieve()
{
    long long sq=sqrt(limit)+100;
    prime[0]=prime[1]=1;
    prm.push_back(2);
    for(long long i=3;i<sq;i+=2)
    {
        if(!prime[i])
        {
            prm.push_back(i);
            for(long long j=i*i;j<sq;j+=i+i)
            {
                prime[j]=1;
            }
        }
    }
}
int get_powers(int n, int p)
{
    int res = 0;
    for (long long power = p ; power <= n ; power *= p)
        res += n/power;
    return res;
}
int divis(long long n,long long m)
{
    if(n==0)
        return 1;
    long long i=0,tem=n;
    long long p=prm[i];
    map<int,int > pfc;
    while(p*p<=n)
    {
        while(n%p == 0 )
        {
            n/=p;
            pfc[p]++;
        }
        p=prm[++i];
    }
    if(n!=1)
    {
        pfc[n]++;
    }
    for(auto it:pfc)
    {
        if(get_powers(m,it.first)<it.second)
            return 0;
    }
    return 1;
}
int main()
{
    //in,out;
    sieve();
    long long n,m;
    while(scanf("%lld%lld",&n,&m)==2)
    {
        if(n>=m)
        {
            printf("%lld divides %lld!\n",m,n);
        }
        else if(divis(m,n)==1)
        {
            printf("%lld divides %lld!\n",m,n);
        }
        else
        {
            printf("%lld does not divide %lld!\n",m,n);
        }
    }
    return 0;
}
