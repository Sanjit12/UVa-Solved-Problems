#include<stdio.h>
int main()
{
    long long a=0;
    while(a>=0)
    {
        scanf("%lld",&a);
        if(a<0)break;
        printf("%lld\n",((a*(a+1))/2)+1);
    }
    return 0;
}
