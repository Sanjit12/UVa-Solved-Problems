#include<bits/stdc++.h>
using namespace std;

#define max 1000005
int prime[max];
int pr[max];
int sieve()
{
    memset(prime,1,sizeof prime);
    prime[0]=0;
    prime[1]=0;
    for(int i=0;i<=sqrt(max);i++)
    {
        if(prime[i])
        {
            for(int j=i+i;j<max;j+=i)
            {
                prime[j]=0;
            }
        }
    }
    int ind=0;
    for(int i=0;i<max;i++)
    {
        if(prime[i])
        {
           pr[ind++]=i;
        }
    }
}
int numpf[max];
int numPF()
{

    for(int i=1;i<max;i++)
    {
        int ind=0,pm=pr[ind],ans=0,tem=i;
        while(pm*pm<=i)
        {
            while(tem%pm==0){ tem/=pm; ans++; }
            pm=pr[++ind];
        }
        if(tem!=1) ans++;
        numpf[i]=ans;
    }
}
int main()
{
    sieve();
    numPF();
    int n;
    for(int i=1;i<max;i++)
    {
        numpf[i] += numpf[i-1];
    }
    while(scanf("%d",&n)!=EOF)
    {
        printf("%d\n",numpf[n]);
    }
    return 0;
}
