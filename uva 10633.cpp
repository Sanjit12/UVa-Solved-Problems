#include<stdio.h>

int main()
{
    unsigned long long n,m,k,i,a,b;
    while(scanf("%llu",&n)==1&&n)
    {
        a=(n*10)/9;
        for(b=a-10,i=0;b<a+11;b++)
        {
            k=b/10;
            m=b-k;
            if(m==n)
            {
                i=1;
                break;
            }
        }
        if(i&&a!=b)
        {
            if(a<b)
            {
                printf("%llu %llu\n",a,b);
            }
            else
            {
                printf("%llu %llu\n",b,a);
            }
        }
        else
        {
            printf("%llu\n",a);
        }
    }
    return 0;
}
