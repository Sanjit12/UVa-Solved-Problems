#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,n;

    scanf("%lld",&t);

    while(scanf("%lld",&n)==1)
    {
        long long ans = (sqrt(1+8*n)-1)/2;
        printf("%lld\n",ans);
    }
    return 0;
}
