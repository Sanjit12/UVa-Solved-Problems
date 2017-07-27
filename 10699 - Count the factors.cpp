#include<bits/stdc++.h>
using namespace std;

#define MAX 1000005

int fac[MAX];
int main()
{
    for(int i=2;i<MAX;i++)
    {
        if(fac[i]==0)
        {
            for(int j=i;j<MAX;j+=i)
            {
                fac[j]++;
            }
        }
    }
    int n;

    while(scanf("%d",&n),n)
    {
        printf("%d : %d\n",n,fac[n]);
    }

    return 0;
}
