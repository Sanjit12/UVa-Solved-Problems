#include<stdio.h>
int main()
{
    int s,m[13],r[13];
    int n,i,c=1;
    while(scanf("%d",&s)==1)
    {
        if(s<0)
        break;
        for(i=0;i<12;i++)
        {
            scanf("%d",&m[i]);
        }
        for(i=0;i<12;i++)
        {
            scanf("%d",&r[i]);
        }
        printf("Case %d:\n",c++);
        for(i=0;i<12;i++)
        {
            if(s>=r[i])
            {
                s-=r[i];
                printf("No problem! :D\n");
            }
            else
            printf("No problem. :(\n");
            s=s+m[i];
        }
    }
    return 0;
}
        