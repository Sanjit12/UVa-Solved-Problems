#include<bits/stdc++.h>
using namespace std;

int main()
{
    int fac[10],n;
    fac[1]=1;
    fac[2]=2;
    for(int i=3; i<9; i++)
    {
        fac[i]=fac[i-1]*i;
    }

    while(scanf("%d",&n)==1)
    {
        int k=0;
        for(int i=8;i>=1;i--)
        {
            while(n>=fac[i])
            {
                n-=fac[i];
                k++;
            }
        }
        printf("%d\n",k);
    }
    return 0;
}
