#include<stdio.h>

int main()
{
    int t,n,p,q,i=1,e[30],j,w;

    scanf("%d",&t);
    while(i<=t)
    {
        scanf("%d%d%d",&n,&p,&q);
        for(j=0;j<n;j++)
        {
            scanf("%d",&e[j]);
        }
        w=0;
        for(j=0;j<n;j++)
        {
            w+=e[j];
            if(w>q)
                break;
            if(j+1>p)
                break;
        }
        printf("Case %d: %d\n",i,j);
        i++;
    }

    return 0;
}
