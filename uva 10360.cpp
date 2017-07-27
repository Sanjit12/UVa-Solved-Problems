#include<stdio.h>
#include<string.h>

#define MAX 1100
long killed[MAX][MAX];

int main()
{
    long s,d,p,i,x,y,k,j,l,c,f,max;
    scanf("%ld",&s);
    while(s--)
    {
        scanf("%ld%ld",&d,&p);
        memset(killed,0,sizeof(killed));
        for(i=0;i<p;i++)
        {
            scanf("%ld%ld%ld",&x,&y,&k);
            for(j=((x-d)<0?0:(x-d));j<=(x+d);j++)
            {
                for(l=((y-d)<0?0:(y-d));l<=(y+d);l++)
                {
                    killed[j][l]+=k;
                }
            }
        }
        max=0;
        for(i=0;i<MAX;i++)
        {
            for(j=0;j<MAX;j++)
            {
                if(killed[i][j]>max)
                {
                    c=i;
                    f=j;
                    max=killed[i][j];
                }
            }
        }
        printf("%ld %ld %ld\n",c,f,max);
    }

    return 0;
}
