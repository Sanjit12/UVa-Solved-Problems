#include<stdio.h>
#include<algorithm>
#include<vector>
#include<iostream>
#include<cstring>

using namespace std;

#define MAX 1000005

#define get(x) (pr[(x)>>6]&(1<<((x>>1)&31)))
#define set(x) (pr[(x)>>6]|=(1<<((x>>1)&31)))

int pr[(MAX>>6)+1];
vector<int> prime;
int dif[78498];
int fre[120];
int sieve()
{
    int i,j,k,l;
    for(i=3; (i*i)<MAX; i+=2)
    {
        if(!get(i))
        {
            for(j=i*i; j<MAX; j+=(i+i))
            {
                set(j);
            }
        }
    }
    prime.push_back(2);
    for(i=3; i<MAX; i+=2)
    {
        if(!get(i))
        {
            prime.push_back(i);

        }
    }
}
int main()
{
    sieve();
    int i,a,b,n,max,p,champion;
    for(i=1; i<78498; i++)
    {
        dif[i-1]=prime[i]-prime[i-1];
    }
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&a,&b);
        auto low=lower_bound(prime.begin(),prime.end(),a);
        max=0;
        memset(fre,0,sizeof(fre));
        for(i=(low-prime.begin()); prime[i+1]<=b; i++)
        {
            fre[dif[i]]++;
            //printf("%d  = %d - %d\n",dif[i],prime[i+1],prime[i]);
        }
        for(i=0;i<120;i++)
        {
            if(fre[i]>max)
            {
                max=fre[i];
                champion=i;
            }
        }
        sort(fre,fre+120);
        if(fre[119]!=fre[118])
        cout<< "The jumping champion is "<<champion<<endl;
        else
            cout<< "No jumping champion"<<endl;
    }
    return 0;
}
