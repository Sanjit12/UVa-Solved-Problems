#include<stdio.h>
int main()
{
    long sum=0,n,p;
    scanf("%ld",&n);
    for(; n>0;)
    {
        for(; n>0;)
        {
            sum+=(n%10);
            if(sum>10)
            {
                p=sum%10;
                sum/=10;
                sum+=p;
            }
            n/=10;
        }
        if(sum==10)
            sum=1;
        printf("%ld\n",sum);
        sum=0;
        scanf("%ld",&n);
    }
    return 0;
}
