#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long fibo[51];
    fibo[1]=1;
    fibo[2]=2;

    for(int i=3;i<51;i++)
    {
        fibo[i]=fibo[i-1]+fibo[i-2];
    }
    int n;
    while(scanf("%d",&n),n)
    {
        printf("%lld\n",fibo[n]);
    }
    return 0;
}
