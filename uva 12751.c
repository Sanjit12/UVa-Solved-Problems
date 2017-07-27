#include<stdio.h>
int main()
{
    int n,k,x,sum=0;
    int i=1,a,j;
    scanf("%d",&a);
    while(i<=a)
    {
       scanf("%d%d%d",&n,&k,&x);
       sum=(n*(n+1)/2);
       for(j=0;j<k;j++)
       {
           sum-=(x++);
       }
       printf("Case %d: %d\n",i,sum);
        i++; 
    }
    return 0;
}