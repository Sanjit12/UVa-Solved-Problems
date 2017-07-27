#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a,b,c;
    scanf("%d",&n);

    while(n--)
    {
        int sum=0;
        scanf("%d",&m);
        for(int i=0;i<m;i++)
        {
            scanf("%d%d%d",&a,&b,&c);
            sum+=(a*c);
        }
        printf("%d\n",sum);
    }
    return 0;
}
