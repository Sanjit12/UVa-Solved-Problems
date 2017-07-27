#include<stdio.h>
int main()
{
    long int n,odd;
    long long int sum,p;
    for(;scanf("%ld",&n)==1;)
    {
        
         odd=(n+1)/2;
         odd=odd*odd;
         sum=odd*odd;
         sum=sum-((odd-3)*(odd-3));
         printf("%lld\n",sum);
    }
    return 0;
}