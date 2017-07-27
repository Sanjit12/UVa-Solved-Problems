#include<stdio.h>
int main()
{
    int a,b,c,i=1,n;
    scanf("%d",&n);
    while(i<=n)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a<b&&b<c||c<b&&b<a)
            printf("Case %d: %d\n",i,b);
        else if(b<a&&a<c||c<a&&a<b)
            printf("Case %d: %d\n",i,a);
        else
            printf("Case %d: %d\n",i,c);
        i++;
    }
    return 0;
}
