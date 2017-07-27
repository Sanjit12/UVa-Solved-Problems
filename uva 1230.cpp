#include<stdio.h>
int bigMod(int b,long p,int m)
{
    int i=1;
    for(; p; p>>=1)
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
    long p,i,n;
    int b,m;
    while(scanf("%ld",&n)==1&&n)
    {
        for(i=0; i<n; i++)
        {
            scanf("%d%ld%d",&b,&p,&m);
            printf("%d\n",bigMod(b,p,m));
        }
    }
    return 0;
}
