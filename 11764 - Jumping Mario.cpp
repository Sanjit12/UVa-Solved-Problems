#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,cas=0;
    scanf("%d",&n);
    while(n--)
    {
        int h=0,l=0,t,pre=0,j;
        scanf("%d",&t);
        scanf("%d",&j);
        pre=j;
        for(int i=1;i<t;i++)
        {
            scanf("%d",&j);
            if(j<pre)l++;
            else if(j>pre)h++;
            pre=j;
        }
        printf("Case %d: %d %d\n",++cas,h,l);
    }
    return 0;
}
