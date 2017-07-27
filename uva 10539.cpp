#include<stdio.h>
#include<math.h>
#include<string.h>

#define MAX 1000005
#define lim (ceil(sqrt(MAX)))
#define set(x) (prime[x>>6]|=(1<<((x>>1)&31)))
#define get(x) (prime[x>>6]&(1<<((x>>1)&31)))

long prime[(MAX>>6)+1];
long p[MAX];

int sieve()
{
    long i,j;
    for(i=3;i<lim;i+=2)
    {
        if(!get(i))
        {
            for(j=i*i;j<MAX;j+=i+i)
            {
                set(j);
            }
        }
    }
    p[0]=2;
    j=1;
    for(i=3;i<MAX;i+=2)
    {
        if(!get(i))
        {
            p[j++]=i;
        }
    }
}
long long almost[80100];

int main()
{
    sieve();
    long long j,k;
    long long a=0,cnt,n,b,ap,i;
    for( i=0;i<78499;i++)
    {
        k=p[i];
        for(j=k*k;j<1000000000010;j*=k)
        {
            almost[a++]=j;
        }
    }
    ap=a;
    scanf("%lld",&n);
    while(n--)
    {
        cnt=0;
        scanf("%lld %lld",&a,&b);
        for(i=0;i<=ap;i++)
        {
            if(almost[i]>=a&&almost[i]<=b)
            {
                cnt++;
            }
        }
        printf("%lld\n",cnt);
    }
    return 0;
}
