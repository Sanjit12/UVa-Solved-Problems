#include<stdio.h>
#include<string.h>

long gen[100001];

int sum(long n)
{
    int s=0;
    while(n)
    {
        s+=(n%10);
        n/=10;
    }
    return s;
}
int find()
{
    long i,j;
    memset(gen,0,sizeof(gen));

    for(i=0; i<100001; i++)
    {
        j=i+sum(i);
        if(gen[j]==0)
        {
            gen[j]=i;
        }
    }
}
int main()
{
    find();
    long n,m;
    scanf("%ld",&n);
    while(n--)
    {
        scanf("%ld",&m);
        printf("%ld\n",gen[m]);
    }
    return 0;
}
