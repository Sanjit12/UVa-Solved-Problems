#include<stdio.h>
#include<string.h>
char fib[4002][1003];
int add(char f[],char f1[],char f2[])
{
    int a,b,c=0,i;
    for(i=0; f1[i]||f2[i]; i++)
    {
        a=f1[i]?(f1[i]-48):0;
        b=f2[i]?(f2[i]-48):0;
        f[i]=(a+b+c)%10+48;
        c=(a+b+c)/10;
    }
    if(c)
        f[i]=c+48;
}
int main()
{
    strcpy(fib[1],"1");
    strcpy(fib[2],"1");
    int i,j,n,len;
    for(i=3; i<4002; i++)
    {
        add(fib[i],fib[i-1],fib[i-2]);
    }
    while(scanf("%d",&n)==1&&n)
    {
        len=strlen(fib[n*2]);
        for(; len--;)
        {
            printf("%c",fib[n*2][len]);
        }
        printf("\n");
    }
    return 0;
}
