#include<stdio.h>
int main()
{
    int l,h,w,i=1,n;
    scanf("%d",&n);
    while(i<=n)
    {
        scanf("%d%d%d",&l,&h,&w);
        if(l<=20&&h<=20&&w<=20)
        {
            printf("Case %d: good\n",i);
        }
        else
        printf("Case %d: bad\n",i);
        i++;
    }
    return 0;
}