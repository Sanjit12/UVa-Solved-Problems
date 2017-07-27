#include<bits/stdc++.h>
using namespace std;

long long rev(long long n)
{
    long long k=0;
    while(n)
    {
        k=k*10+(n%10);
        n/=10;
    }
    return k;
}
int main()
{
    long long n,i,p,num;

    scanf("%lld",&n);
    while(n--)
    {
        scanf("%lld",&num);
        i=0,p=0;
        while(1)
        {
            i++;
            p = rev(num);
            num+=p;
            if(rev(num)==num)
                break;

        }
        printf("%lld %lld\n",i,num);
    }
    return 0;
}
