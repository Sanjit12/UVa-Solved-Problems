#include<cstdio>
#include<cmath>

#define mod 1000000

int x[1000005];

int main()
{
    int n,a,b,c;
    x[0]=1;
    for(int i=1; i<1000001; i++)
    {
        a=i-sqrt(i);
        b=log(i);
        c=i*sin(i)*sin(i);
        x[i]=(x[a]%mod+x[b]%mod+x[c]%mod)%mod;
    }
    while(scanf("%d",&n)==1&&n>-1)
    {
        printf("%d\n",x[n]);
    }
    return 0;
}
