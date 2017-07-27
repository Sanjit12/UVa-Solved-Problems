#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,d;

    while(scanf("%d%d",&n,&d)!=EOF)
    {
        int k=n/d;
        int p=d;
        printf("[%d;",k);
        d=n-(k*d);
        n=p;
        for(; d>1;)
        {
            k=n/d;
            p=d;
            printf("%d,",k);
            d=n-(k*d);
            n=p;
        }
        printf("%d]\n",n);
    }
    return 0;
}
