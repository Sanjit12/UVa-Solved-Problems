#include<stdio.h>
int main()
{
    long a,b,c,n,i,p;
    scanf("%ld",&n);
    while(n--)
    {
        scanf("%ld%ld",&a,&b);
        for(p=1; p<=b; p++)
        {
            for(i=1; i<=a; i++)
            {
                for(c=1; c<=i; c++)
                {
                    printf("%ld",i);
                }
                printf("\n");
            }
            for(i=i-2; i>0; i--)
            {
                for(c=1; c<=i; c++)
                {
                    printf("%ld",i);
                }
                printf("\n");
            }
            if(n==0&&p==b)
                break;
                printf("\n");
        }
    }
    return 0;
}
