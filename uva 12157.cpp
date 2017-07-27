#include<stdio.h>

int main()
{
    long t,du[20],i=1,n,k,m,j,cnt,cnp;

    scanf("%ld",&t);
    while(i<=t)
    {
        scanf("%ld",&n);
        m=0;j=0;
        for(k=0;k<n;k++)
        {
            scanf("%ld",&du[k]);
        }
        cnt=cnp=0;
        for(k=0,cnt=0;k<n;k++)
        {
            cnt+=(du[k]+30)/30;
            cnp+=(du[k]+60)/60;
        }
        m=cnt*10;
        j=cnp*15;
        if(m<j)
        {
            printf("Case %ld: Mile %ld\n",i,m);
        }
        else if(m>j)
        {
            printf("Case %ld: Juice %ld\n",i,j);
        }
        else
        {
            printf("Case %ld: Mile Juice %ld\n",i,m);
        }
        i++;
    }
    return 0;
}
