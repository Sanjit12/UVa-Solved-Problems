#include<stdio.h>
#include<string.h>

#define MAX 1010

int prime[MAX];
int pri[MAX];
class sieve
{
public:
    sieve()
    {
        int i,j,k;
        for(i=0; i<MAX; i++)
        {
            prime[i]=1;
        }
        prime[0]=0;
        prime[1]=1;
        for(i=2; i*i<MAX; i++)
        {
            for(j=i+i; j<MAX; j+=i)
            {
                prime[j]=0;
            }
        }
        j=0;
        i=0;
        while(i<MAX)
        {
            if(prime[i])
            {
                pri[j++]=i;
            }
            i++;
        }
        for(i=1; i<MAX; i++)
        {
            prime[i]+=prime[i-1];
        }
        int n,c,cnt,p,f=0;
        while(scanf("%d%d",&n,&c)==2)
        {
            printf("%d %d: ",n,c);
            cnt=prime[n];
            if(cnt%2==0)
            {
                p=c*2;
            }
            else
                p=(c*2)-1;
            j=cnt/2;
            j-=(p/2);
            if(j<0)
            {
                p=cnt;
                j=0;
            }
            for(; p--; j++)
            {
                printf("%d",pri[j]);
                if(p)
                {
                    printf(" ");
                }
            }
            printf("\n\n");
        }
    }
};
sieve a;
int main()
{
    return 0;
}
