#include<stdio.h>
int main()
{
    unsigned long long d,i,t;
    int s;
    while(scanf("%d%llu",&s,&d)==2)
    {
        t=s;
        for(i=s;t<d;)
        {
            i++;
            t+=i;
        }
        printf("%llu\n",i);
    }
    return 0;
}