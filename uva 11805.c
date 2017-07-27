#include<stdio.h>
int main()
{
    int n,t,k,p,a,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d",&n,&k,&p);
        for(a=0;a<p;a++)
        {
            k++;
            if(k>n)
                k=1;
        }
        printf("Case %d: %d\n",i,k);
    }
    return 0;
}
