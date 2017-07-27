#include<stdio.h>
int main()
{
    int a,b,i,j[100],k=0,x=0,n;
    scanf("%d",&n);
    while(x<n)
    {
        scanf("%d",&a);
        for(i=0;i<a;i++)
        {
            scanf("%d",&j[i]);
        }
        for(i=0;i<a;i++)
        {
            if(j[i]>k)
                k=j[i];
        }
        printf("Case %d: %d\n",x+1,k);
        x++;
        k=0;
    }
    return 0;
}
