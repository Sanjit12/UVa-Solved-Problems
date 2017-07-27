#include<stdio.h>
#include<string.h>

#define MAX 1000001

char p[MAX],pali[MAX];
int sieve()
{
    memset(p,1,sizeof(p));
    long i,j;
    p[0]=0;
    for(i=3;i*i<MAX;i+=2)
    {

        if(p[(i-1)/2])
        {
            j=3*i;
            while(j<MAX)
            {
                p[(j-1)/2]=0;
                j=j+i+i;
            }
        }
    }

}
int prime(long n)
{
    if(n==2||n==1)
    {
        return 1;
    }
    else if(n%2==0)
    {
        return 0;
    }
    else return p[(n-1)/2];
}
int pal(long n)
{
    long num=0,t=n;
    while(t)
    {
        num=num*10+(t%10);
        t/=10;
    }
    if(num==n)
    {
        return 1;
    }
    return 0;
}
int palin()
{
    long i;
    memset(pali,0,sizeof(pali));
    for(i=0;i<MAX;i++)
    {
        if(prime(i))
        {
            if(pal(i))
            {
                pali[i]=1;
            }
        }
    }
}
int main()
{
    sieve();
    palin();
    long n,m;
    while(scanf("%ld",&n)==1)
    {
        if(pali[n])
        {
            printf("%ld\n",2*n);
            break;
        }
        else
            printf("%ld\n",2*n);
    }
    return 0;
}
