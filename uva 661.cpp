#include<stdio.h>
#include<string.h>

long dev[21];

int main()
{
    long n,m,c,i,j,k,total,f,l=1,max,t=0;
    while(scanf("%ld%ld%ld",&n,&m,&c)==3&&(n||m||c))
    {
        memset(dev,0,sizeof(dev));
        for(i=0; i<n; i++)
        {
            scanf("%ld",&k);
            dev[i]=k;
        }
        total=0;
        max=0;
        f=0;
        for(i=0; i<m; i++)
        {
            scanf("%ld",&k);
            total=(total+dev[k-1]);
            if(total>max)
                max=total;
            if(total>c)
            {
                f=1;
            }
            dev[k-1]=(dev[k-1]*-1);
        }
        if(f==1)
        {
            printf("Sequence %ld\nFuse was blown.\n\n",l);
        }
        else
        {
            printf("Sequence %ld\nFuse was not blown.\nMaximal power consumption was %ld amperes.\n\n",l,max);
        }
        l++;
    }

    return 0;
}
