#include<bits/stdc++.h>

using namespace std;

int main()
{
    int b,n,d,c,v;
    int r[21];
    while(scanf("%d%d",&b,&n),b,n)
    {
        for(int i=1;i<=b;i++)
        {
            scanf("%d",&r[i]);
        }
        for(int i=1;i<=n;i++)
        {
            scanf("%d%d%d",&d,&c,&v);
            r[d]-=v;
            r[c]+=v;
        }
        int f=0;
        for(int i=1;i<=b;i++)
        {
            if(r[i]<0)
            {
                f=1;
                break;
            }
        }
        if(f)
        {
            printf("N\n");
        }
        else
        {
            printf("S\n");
        }
    }
    return 0;
}
