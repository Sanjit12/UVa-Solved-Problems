#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,B,H,W,p,a;

    while(scanf("%d%d%d%d",&N,&B,&H,&W)==4)
    {
        int cost=(1<<30),max;
        for(int i=0; i<H; i++)
        {
            scanf("%d",&p);
            for(int j=0; j<W; j++)
            {
                scanf("%d",&a);
                if(a>=N)
                {
                    max=p*N;
                    if(max<cost)
                    {
                        cost=max;
                    }
                }
            }
        }
        if(cost>B)
        {
            printf("stay home\n");
        }
        else
            printf("%d\n",cost);
    }

    return 0;
}
