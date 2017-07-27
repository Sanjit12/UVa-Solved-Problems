#include<bits/stdc++.h>
using namespace std;
int ar[1000005];
int main()
{
    int t,d,q,p;
    char M[10001][22];
    int L[10001],H[10001];
    scanf("%d",&t);
    int f=0;
    while(t--)
    {
        if(f)
            printf("\n");
        f=1;
        memset(ar,0,sizeof ar);
        scanf("%d",&d);

        for(int i=0;i<d;i++)
        {
            scanf("%s %d %d",M[i],&L[i],&H[i]);
            for(int j=L[i];j<=H[i];j++)
            {
                ar[j]++;
            }
        }
        scanf("%d",&q);
        for(int i=0;i<q;i++)
        {
            scanf("%d",&p);
            if(ar[p]>1||ar[p]==0)
            {
                printf("UNDETERMINED\n");
            }
            else
            {
                for(int j=0;j<d;j++)
                {
                    if(p>=L[j]&&p<=H[j])
                    {
                        printf("%s\n",M[j]);
                        break;
                    }
                }
            }
        }
    }

    return 0;
}
