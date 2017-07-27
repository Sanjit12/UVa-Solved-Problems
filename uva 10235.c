#include<stdio.h>
#include<math.h>
#include<string.h>

#define MAX 1000001
char p[MAX];
char e[MAX];
int sieve()
{
    long i,r,j;
    memset(p,1,sizeof(p));
    p[0]=0;
    r=sqrt(MAX);
    for(i=3;i<=r;i+=2)
    {
        if(p[(i-1)/2])
        {
            for(j=3*i;j<MAX;j+=i+i)
            {
                p[(j-1)/2]=0;
            }
        }
    }
}
int prime(long n)
{
    if(n==2)
    return 1;
    else if(n%2==0)
    return 0;
    else
    return p[(n-1)/2];
}
long rev(long n)
{
    long s=0;
    for(;n>0;)
    {
        s=s*10+(n%10);
        n/=10;
    }
    return s;
}
int emirp()
{
    long i,j;
    memset(e,0,sizeof(e));
    for(i=1;i<MAX;i++)
    {
        if(prime(i))
        {
          j= rev(i);
          if(prime(j)&&j!=i)
          e[i]=1;
        }
    }
}
int main()
{
    long n;
    sieve();
    emirp();
    while(scanf("%ld",&n)==1)
    {
        if(prime(n)&&e[n])
        printf("%ld is emirp.\n",n);
        else if(prime(n))
        printf("%ld is prime.\n",n);
        else
        printf("%ld is not prime.\n",n);
    }
    return 0;
}