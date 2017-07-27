#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        if(n>=0)
        {
            ll fac=1;
            if(n<8)
            {
                printf("Underflow!\n");
            }
            else if(n>13)
            {
                printf("Overflow!\n");
            }
            else
            {
                for(int i=1; i<=n; i++)
                {
                    fac*=i;
                }
                printf("%lld\n",fac);
            }
        }
        else
        {
            int k=-n;
            if(k&1)
            {
                printf("Overflow!\n");
            }
            else
            {
                printf("Underflow!\n");
            }
        }
    }
    return 0;
}
