#include<stdio.h>
#include<string.h>
char fibo[5001][1110];
int add(char fib[],char fib1[],char fib2[])
{
    long i,a,b,c=0;
    for(i=0;fib1[i]||fib2[i];i++)
    {
        a=(fib1[i]?(fib1[i]-48):0);
        b=(fib2[i]?(fib2[i]-48):0);
        fib[i]=(a+b+c)%10+48;
        c=(a+b+c)/10;
    }
    if(c)
        fib[i]=c+48;
}
int main()
{

    strcpy(fibo[0],"0");
    strcpy(fibo[1],"1");
    strcpy(fibo[2],"1");
    long i,len,n;
    for(i=3;i<5001;i++)
    {
        add(fibo[i],fibo[i-1],fibo[i-2]);
    }
    while(scanf("%ld",&n)==1)
    {
        len=strlen(fibo[n]);
        printf("The Fibonacci number for %ld is ",n);
        for(i=len-1;i>=0;i--)
        {
            printf("%c",fibo[n][i]);
        }
        printf("\n");
    }
    return 0;
}

