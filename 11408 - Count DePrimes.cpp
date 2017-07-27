#include<bits/stdc++.h>
using namespace std;
int prime[5000005];
int lim=5000005;
vector<int> prm;
int sieve()
{
    int sq=sqrt(lim)+1;
    prime[1]=1;
    prm.push_back(2);
    for(int i=3; i<sq; i+=2)
    {
        if(!prime[i])
        {
            prm.push_back(i);
            for(int j=i*i; j<lim; j+=(i+i))
            {
                prime[j]=1;
            }
        }
    }
    for(int i=sq; i<lim; i+=2)
    {
        if(!prime[i])
        {
            prm.push_back(i);
        }
    }
}
int spf[5000005];
int sumpf()
{
    int s=prm.size();
    for(int i=0; i<s; i++)
    {
        int p=prm[i];
        for(int j=p; j<lim; j+=p)
        {
            spf[j]+=p;
        }
    }
}
int de_prime[5000005];
int deprime()
{
    for(int i=2;i<lim;i++)
    {
        if(!prime[spf[i]]&&(spf[i]&1||spf[i]==2))
        {
            de_prime[i]=de_prime[i-1]+1;
        }
        else
        {
            de_prime[i]=de_prime[i-1];
        }
    }
}
int main()
{
    sieve();
    sumpf();
    deprime();
    int a,b,c;
    while(scanf("%d",&a)==1)
    {
        if(a==0)
            break;
        scanf("%d",&b);
        printf("%d\n",de_prime[b]-de_prime[a-1]);
    }
    return 0;
}
