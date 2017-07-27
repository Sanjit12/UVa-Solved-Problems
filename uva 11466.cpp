#include<stdio.h>
#include<math.h>

#define MAX 10001000
#define LMT 3165

long long prime[(MAX>>6)+1];

#define set(x) (prime[(x)>>6]|=(1<<((x>>1)&31)))
#define get(x) (prime[(x)>>6]&(1<<((x>>1)&31)))

int sieve()
{
    for(long long i=3; i<=LMT; i+=2)
    {
        if(!get(i))
        {
            for(long long j=i*i; j<MAX; j+=i+i)
            {
                set(j);
            }
        }
    }
}
int isprime(long long n)
{
    if(n<2||n%2==0) return 0;
    return ! get(n);
}
long long pri[MAX];
int main()
{
    sieve();
    long long j=1,i,f=0;
    long long a,b,n,m,cnt,c;
    pri[0]=2;
    for(i=3; i<MAX; i+=2)
    {
        if(isprime(i))
        {
            pri[j++]=i;
        }
    }
    while(scanf("%lld",&n)==1&&n)
    {
        cnt=1;
        c=0;
        f=0;
        if(n<0)
            n*=-1;
        m=n;
        for(i=0; (pri[i]*pri[i])<=m; i++)
        {
            if(n%pri[i]==0)
            {
                cnt++;
                while(n%pri[i]==0)
                {
                    n/=pri[i];
                }
            }
            if(n<2)
            {
                f=1;
                break;
            }
        }
        if((cnt==2&&n==1)||cnt==1)
        {
            printf("-1\n");
        }
        else if(pri[i]>n)
        {
            printf("%lld\n",pri[i]);
        }
        else
        {
            printf("%lld\n",n);
        }
    }
    return 0;
}
