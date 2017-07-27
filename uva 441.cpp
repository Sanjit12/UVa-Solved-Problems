#include<stdio.h>

int main()
{
    int lotto[50],i,j,n,k=0,l,m,o=0,p;
    while(scanf("%ld",&n)==1&&n)
    {
        if(o)
            printf("\n");
        o=1;
        for(i=0; i<n; i++)
        {
            scanf("%ld",&lotto[i]);
        }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                for(k=j+1;k<n;k++)
                {
                    for(l=k+1;l<n;l++)
                    {
                        for(m=l+1;m<n;m++)
                        {
                            for(p=m+1;p<n;p++)
                            {
                                printf("%d %d %d %d %d %d\n",lotto[i],lotto[j],lotto[k],lotto[l],lotto[m],lotto[p]);
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
