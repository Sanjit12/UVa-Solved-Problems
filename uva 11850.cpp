#include<stdio.h>
#include<string.h>

#define set(x) (memset((x),0,sizeof((x))))

int main()
{
    int road[1425];
    int n,i,s,j,t,dis,m;
    while(scanf("%d",&n)==1&&n)
    {
        set(road);
        m=0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&s);
            if(s>m)
                m=s;
            road[s]=1;
        }
        dis=1422-m;
        if(dis>100)
        {
            printf("IMPOSSIBLE\n");
            continue;
        }
        for(i=0,j=200; i<1423; i++)
        {
            if(j==0)
            {
                break;
            }
            else if(road[i]==1)
            {
                j=200;
            }
            else
            {
                j--;
            }
        }
        if(i<1423)
        {
            printf("IMPOSSIBLE\n");

        }
        else
        {
            printf("POSSIBLE\n");
        }
    }
    return 0;
}
