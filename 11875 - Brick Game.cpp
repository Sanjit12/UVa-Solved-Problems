#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t,cas=1;
    int ar[11];
    scanf("%d",&t);

    while(t--)
    {
        memset(ar,0,sizeof ar);
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&ar[i]);
        }
        printf("Case %d: %d\n",cas++,ar[n/2]);
    }
    return 0;
}
