#include<stdio.h>
#include<string.h>
#define MAX 20000003
char p[MAX/2];
long i,j,lp[MAX/20],rp[MAX/20];
int sieve()
{
    memset(p,1,sizeof(p));
    p[0]=0;
    for(i=3;i<4500;i+=2)
    {
        if(p[(i-1)/2])
        {
            for(j=i*i;j<MAX;j+=(i+i))
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
int tpcnt()
{
    j=0;
    for(i=3;i<MAX;i+=2)
    {
        if(prime(i)&&prime(i+2))
        {
            lp[j]=i;
            rp[j]=i+2;
            j++;
        }
    }
}
int main()
{
    sieve();
    tpcnt();
    long a,b,c;
    while(scanf("%ld",&b)==1)
    {
        printf("(%ld, %ld)\n",lp[b-1],rp[b-1]);
    }
    return 0;
}
    