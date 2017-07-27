#include<bits/stdc++.h>

using namespace std;

#define max 1000000000

int prime[10000];
int pri[250001];
double fib[2500010];

#define set(a) (prime[a>>6]|=(1<<((a>>1)&31)))
#define get(a) (prime[a>>6]&(1<<((a>>1)&31)))

int sieve()
{
    for(int i=3;i<=500;i+=2)
    {
        if(!get(i))
        {
            for(int j=i*i;j<=250000;j+=i+i)
            {
                set(j);
            }
        }
    }
    int n=2;
    for(int i=3;i<=250000;i+=2)
    {
        if(!get(i))
        {
            pri[n++]=i;
        }
    }
    pri[1]=3;
    pri[2]=4;
}
int fibo()
{
    fib[0]=fib[1]=1;
    int flag=0;
    for(int i=2;i<=250000;i++)
    {
        if(flag)
        {
            fib[i]=fib[i-1]+fib[i-2]/10;
            flag=0;
        }
        else
        {
            fib[i]=fib[i-1]+fib[i-2];
        }
        if(fib[i]>1e9)
        {
            fib[i]/=10;
            flag=1;
        }
    }

}
int main()
{
    sieve();
    fibo();
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        printf("%d\n",(int)fib[pri[n]-1]);
    }
    return 0;
}
