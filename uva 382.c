#include<stdio.h>
int main()
{
    long a[100],b,c,i,n,sum=0,t,l=0;
    for(i=0;; i++)
    {
        scanf("%ld",&a[i]);
        if(a[i]==0)
            break;
    }
    printf("PERFECTION OUTPUT\n");
    for(b=0; b<i; b++)
    {
        for(c=1; c<a[b]; c++)
        {
            if(a[b]%c==0)
            {
                sum+=c;
            }
        }
        t=a[b];
        for(; t>0;)
        {
            t/=10;
            l++;
        }
        l=5-l;
        for(t=0; t<l; t++)
            printf(" ");
        if(sum<a[b])
        {
            printf("%ld  DEFICIENT\n",a[b]);
        }
        else if(sum>a[b])
        {
            printf("%ld  ABUNDANT\n",a[b]);
        }
        else
        {
            printf("%ld  PERFECT\n",a[b]);
        }
        l=0;
        sum=0;
    }
    printf("END OF OUTPUT\n");
}
