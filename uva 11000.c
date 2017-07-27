#include<stdio.h>
int main()
{
    long long a=0,b=1,sum,t=0,y,i;
    while(scanf("%lld",&y)==1)
    {
        if(y<0)break;
        for(i=0;i<=y;i++)
        {
            sum=a+b;
            t+=b;
            a=b;
            b=sum;
        }
        printf("%lld %lld\n",t-a,t);
        a=0;
        b=1;
        t=0;
    }
    return 0;
}