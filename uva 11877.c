#include<stdio.h>
int main()
{
    int n;
    for(;scanf("%d",&n)==1;)
    {
        if(n==0)break;
        if(n==2)n--;
        printf("%d\n",n/2);
    }
    return 0;
}