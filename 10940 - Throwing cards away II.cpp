#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int v[20];
    for(int i=0;i<20;i++)
    {
        v[i]=1<<i;
    }
    while(scanf("%d",&n),n)
    {
        int i;
        for(i=0;i<20;i++)
        {
            if(v[i+1]>n)
                break;
        }
        int d=n-v[i];
        if(d)
        printf("%d\n",d*2);
        else
            printf("%d\n",n);
    }
    return 0;
}
