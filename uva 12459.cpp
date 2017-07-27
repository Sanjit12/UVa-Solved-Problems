#include<stdio.h>
int main()
{
    long long fib[81],i;
    int n;
    fib[1]=1;
    fib[2]=2;
    for(i=3;i<81;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }
    while(scanf("%d",&n)==1&&n)
    {
        printf("%lld\n",fib[n]);
    }
    return 0;
}
