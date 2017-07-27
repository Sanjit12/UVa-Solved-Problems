#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<vector>
using namespace std;

#define MAX 100000010
#define set(x) (prime[(x)>>5]|=(1<<((i)&31)))
#define get(x) ((prime[(x)>>5]>>((x)&31))&1)
#define mem(x) (memset((x),0,(sizeof(x))))
#define r (ceil(sqrt(MAX)/2))

unsigned int prime[(MAX>>5)+1];
vector<int>pri;

int sieve()
{
    int  i,j,k;
    mem(prime);
    for(k=1; k<=r+1; k++)
    {
        if(get(k)==0)
        {
            for(j=(k<<1)+1,i=(k<<1)*(k+1); i<MAX/2; i+=j)
            {
                set(i);
            }
        }
    }
    pri.push_back(2);
    for (int i=3; i <= MAX; i += 2)
        if (!get((i-1)>>1))
            pri.push_back(i);
}
int isprime(int p)
{
    return p==2 || (p>2 && (p&1)==1 && (get((p-1)>>1)==0));
}
int main()
{
    sieve();
    int a,b,n,l,u,m,i,f;
    while(scanf("%d",&n)==1)
    {
        if(n%2)
        {
            if(isprime(n-2))
            {
                printf("%d is the sum of 2 and %d.\n",n,n-2);
            }
            else
            {
                printf("%d is not the sum of two primes!\n",n);
            }
        }
        else
        {
            a=n/2;
            l=0;
            u=pri.size();
            while(l<=u)
            {
                m=(l+u)/2;

                if(pri[m]>a)
                {
                    u=m-1;
                }
                else if(pri[m]<a)
                {
                    l=m+1;
                }
                else
                {
                    break;
                }
            }
            f=0;
            if(pri[m]>n/2)
            {
                m--;
            }
            for(i=m; i>=0; i--)
            {
                if(isprime(n-pri[i])&&(pri[i]!=(n-pri[i])))
                {
                    printf("%d is the sum of %d and %d.\n",n,pri[i],n-pri[i]);
                    f=1;
                    break;
                }
            }
            if(!f)
            {
                printf("%d is not the sum of two primes!\n",n);
            }
        }
    }
    return 0;
}
