#include<stdio.h>

long digit(long n)
{
    long dig=0;
    while(n)
    {
        n/=10;
        dig++;
    }
    return dig;
}
long p(long n,long d)
{
    int i,t=n;
    for(i=1;i<d;i++)
    {
        n*=t;
    }
    return n;
}
int main()
{
    long num,i,j,n,d,num2,tem;
    scanf("%ld",&n);
    while(n--)
    {
        num2=0;
        scanf("%ld",&num);
        tem=num;
        d=digit(num);
        while(num)
        {
            j=(num%10);
            num2+=(p(j,d));
            num/=10;
        }
        if(num2==tem)
        {
            printf("Armstrong\n");
        }
        else
        {
            printf("Not Armstrong\n");
        }
    }
    return 0;
}
