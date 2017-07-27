#include<stdio.h>
long long f[51];
int fibbo()
{
    int i,j;
    long long a=1,b=1,sum;
    f[0]=0;
    for(i=1;i<51;i++)
    {
        sum=a+b;
        f[i]=sum;
        a=b;
        b=sum;
    }
}
int main()
{
    fibbo();
    int a,n,i=1;
    scanf("%d",&n);
    while(i<=n)
    {
        scanf("%d",&a);
        printf("Scenario #%d:\n%lld\n\n",i,f[a]);
        i++;
    }
    return 0;
}