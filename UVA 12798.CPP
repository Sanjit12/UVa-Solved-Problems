#include<stdio.h>
int main()
{
    int i,j,n,k,m,c,cnt;
    while(scanf("%d%d",&n,&m)==2)
    {
        cnt=0;
        for(i=0;i<n;i++)
        {
            c=0;
            for(j=0;j<m;j++)
            {
                scanf("%d",&k);
                if(k>0)
                {
                    c++;
                }
            }
            if(c==m)
            {
                cnt++;
            }
        }
        printf("%d\n",cnt);
    }
    return 0;
}
