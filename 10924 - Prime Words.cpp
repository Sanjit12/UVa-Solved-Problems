#include<bits/stdc++.h>
using namespace std;
int prime[1100];
int sieve()
{
    prime[0]=1;
    prime[1]=0;
    prime[2]=0;
    for(int i=2;i*i<1100;i++)
    {
        if(prime[i]==0)
        {
            for(int j=i+i;j<1100;j+=i)
            {
                prime[j]=1;
            }
        }
    }
}
int main()
{
    sieve();
    char ch[22];

    while(gets(ch)!=NULL)
    {
        int sum=0;
        for(int i=0;ch[i];i++)
        {
            if(ch[i]>='a'&&ch[i]<='z')
            {
                sum+=(ch[i]-'a'+1);
            }
            else
            {
                sum+=(ch[i]-'A'+27);
            }
        }
        if(!prime[sum])
        {
            printf("It is a prime word.\n");
        }
        else
        {
            printf("It is not a prime word.\n");
        }
    }
    return 0;
}

