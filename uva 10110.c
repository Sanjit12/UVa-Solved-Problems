#include<stdio.h>
#include<math.h>
int main()
{
    unsigned long n,i,r;
    while(scanf("%lu",&n)==1&&n>0)
    {
        r=sqrt(n);
        if(r*r==n)
        printf("yes\n");
        else
        printf("no\n");
    }
    return 0;
}