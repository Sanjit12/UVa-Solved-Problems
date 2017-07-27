#include<stdio.h>
int main()
{
    int n,i=1,s,g,k,j=1;
    while(scanf("%d",&n)==1&&n)
    {
        for(i=0,s=0,g=0;i<n;i++)
        {
            scanf("%d",&k);
            if(k==0)
            {
                g++;
            }
            else
            {
                s++;
            }
        }
        printf("Case %d: %d\n",j++,(s-g));
    }
    return 0;
}
