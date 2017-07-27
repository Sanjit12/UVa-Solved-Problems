#include<stdio.h>
long long bigMod(long long b,long long p,long long m)
{
    long long i=1;
    for(;p;p>>=1)
    {
        if(p&1)
        {
            i=(b*i)%m;
        }
        b=(b*b)%m;
    }
    return i;
}
int main()
{
    long long b,p,m;
    while(scanf("%lld%lld%lld",&b,&p,&m)==3)
    {
        printf("%lld\n",bigMod(b,p,m));
    }
    return 0;
}
